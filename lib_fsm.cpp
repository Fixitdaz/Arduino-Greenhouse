#include "Arduino.h"
#include "lib_fsm.h"

FiniteStateMachine::FiniteStateMachine(int stateCount) {
  
  _stateCount = stateCount;
  
  // Malloc space for the boolean lookup table
  _transitionMap = (boolean **) malloc(stateCount * sizeof(boolean *));
  for (int i=0; i < stateCount; i++) {
    _transitionMap[i] = (boolean *) malloc(stateCount * sizeof(boolean));
  }
  
  // Malloc space for the handler function pointers
  _willLeaveHandlers = (FSM_HandlerFn *) malloc(stateCount * sizeof(FSM_HandlerFn));
  _didLeaveHandlers = (FSM_HandlerFn *) malloc(stateCount * sizeof(FSM_HandlerFn));
  _willEnterHandlers = (FSM_HandlerFn *) malloc(stateCount * sizeof(FSM_HandlerFn));
  _didEnterHandlers = (FSM_HandlerFn *) malloc(stateCount * sizeof(FSM_HandlerFn));
}

void FiniteStateMachine::initialize() {
  
  _didEnterHandlers[_currentState](_currentState, _currentState);
}

int FiniteStateMachine::getCurrentState() {
  
  return _currentState;
}

void FiniteStateMachine::setCanTransition(int fromState, int toState, boolean canTransition) {
  
  if (fromState < _stateCount && toState < _stateCount) {
    
    _transitionMap[fromState][toState] = canTransition;
    
  }
}

boolean FiniteStateMachine::canTransitionToState(int toState) {
  
  if (toState < _stateCount) {
    
    return _transitionMap[_currentState][toState];
  
  } else return false;
}

boolean FiniteStateMachine::transitionToState(int toState) {
  
  if (this->canTransitionToState(toState)) {
    
    if (toState == _currentState) return true;
    else {
    
      // Run pre-state transition handlers
//      if (_willLeaveHandlers[_currentState]) _willLeaveHandlers[_currentState](_currentState, toState);
//      if (_willEnterHandlers[_currentState]) _willEnterHandlers[_currentState](_currentState, toState);
      
      // Change state
      _currentState = toState;
      
      // Run post-state transition handlers
      if (_didLeaveHandlers[_currentState]) _didLeaveHandlers[_currentState](_currentState, toState);
      if (_didEnterHandlers[_currentState]) _didEnterHandlers[_currentState](_currentState, toState);
    
      return true;
      
    }
    
  } else return false;
}

void FiniteStateMachine::setWillLeaveHandler(int state, FSM_HandlerFn handlerFn) {
  
  _willLeaveHandlers[state] = handlerFn;
}

void FiniteStateMachine::setDidLeaveHandler(int state, FSM_HandlerFn handlerFn) {
  
  _didLeaveHandlers[state] = handlerFn;
}

void FiniteStateMachine::setWillEnterHandler(int state, FSM_HandlerFn handlerFn) {
  
  _willEnterHandlers[state] = handlerFn;
}

void FiniteStateMachine::setDidEnterHandler(int state, FSM_HandlerFn handlerFn) {
  
  _didEnterHandlers[state] = handlerFn;
}
