/* 
* Copyright (c) 2013, Nordic Semiconductor ASA
* All rights reserved.
* 
* Redistribution and use in source and binary forms, with or without modification,
* are permitted provided that the following conditions are met:
* 
* - Redistributions of source code must retain the above copyright notice, this
*   list of conditions and the following disclaimer.
* 
* - Redistributions in binary form must reproduce the above copyright notice, this
*   list of conditions and the following disclaimer in the documentation and/or
*   other materials provided with the distribution.
* 
* - The name of Nordic Semiconductor ASA may not be used to endorse or promote
*   products derived from this software without specific prior written permission.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/**
* This file is autogenerated by nRFgo Studio .3031 
*/

#ifndef SETUP_MESSAGES_H__
#define SETUP_MESSAGES_H__

#include "hal_platform.h" 
#include "aci.h"

// You have now chosen to upload the configuration to OTP on the device.
// This will result in a device that you can not modify afterwards. If this is your intention,
// remove this comment and the #error below
#error Generating configuration for OTP. Please verify usage by removing this error message from include file.

#define SETUP_ID 0
#define SETUP_FORMAT 3 /** nRF8001 D */
#define ACI_DYNAMIC_DATA_SIZE 288

/* Service: Greenhouse Measurements - Characteristic: Exterior Humidity - Pipe: TX */
#define PIPE_GREENHOUSE_MEASUREMENTS_EXTERIOR_HUMIDITY_TX          1
#define PIPE_GREENHOUSE_MEASUREMENTS_EXTERIOR_HUMIDITY_TX_MAX_SIZE 4

/* Service: Greenhouse Measurements - Characteristic: Exterior Temperature - Pipe: TX */
#define PIPE_GREENHOUSE_MEASUREMENTS_EXTERIOR_TEMPERATURE_TX          2
#define PIPE_GREENHOUSE_MEASUREMENTS_EXTERIOR_TEMPERATURE_TX_MAX_SIZE 4

/* Service: Greenhouse Measurements - Characteristic: Interior Humidity - Pipe: TX */
#define PIPE_GREENHOUSE_MEASUREMENTS_INTERIOR_HUMIDITY_TX          3
#define PIPE_GREENHOUSE_MEASUREMENTS_INTERIOR_HUMIDITY_TX_MAX_SIZE 4

/* Service: Greenhouse Measurements - Characteristic: Interior Temperature - Pipe: TX */
#define PIPE_GREENHOUSE_MEASUREMENTS_INTERIOR_TEMPERATURE_TX          4
#define PIPE_GREENHOUSE_MEASUREMENTS_INTERIOR_TEMPERATURE_TX_MAX_SIZE 4

/* Service: Greenhouse State - Characteristic: Venting Necessity - Pipe: TX */
#define PIPE_GREENHOUSE_STATE_VENTING_NECESSITY_TX          5
#define PIPE_GREENHOUSE_STATE_VENTING_NECESSITY_TX_MAX_SIZE 4

/* Service: Greenhouse State - Characteristic: Venting Necessity - Pipe: SET */
#define PIPE_GREENHOUSE_STATE_VENTING_NECESSITY_SET          6
#define PIPE_GREENHOUSE_STATE_VENTING_NECESSITY_SET_MAX_SIZE 4

/* Service: Greenhouse State - Characteristic: Venting Necessity Target - Pipe: TX */
#define PIPE_GREENHOUSE_STATE_VENTING_NECESSITY_TARGET_TX          7
#define PIPE_GREENHOUSE_STATE_VENTING_NECESSITY_TARGET_TX_MAX_SIZE 4

/* Service: Greenhouse State - Characteristic: Venting Necessity Target - Pipe: SET */
#define PIPE_GREENHOUSE_STATE_VENTING_NECESSITY_TARGET_SET          8
#define PIPE_GREENHOUSE_STATE_VENTING_NECESSITY_TARGET_SET_MAX_SIZE 4

/* Service: Greenhouse State - Characteristic: Climate Control State - Pipe: TX */
#define PIPE_GREENHOUSE_STATE_CLIMATE_CONTROL_STATE_TX          9
#define PIPE_GREENHOUSE_STATE_CLIMATE_CONTROL_STATE_TX_MAX_SIZE 1

/* Service: Greenhouse State - Characteristic: Climate Control State - Pipe: SET */
#define PIPE_GREENHOUSE_STATE_CLIMATE_CONTROL_STATE_SET          10
#define PIPE_GREENHOUSE_STATE_CLIMATE_CONTROL_STATE_SET_MAX_SIZE 1

/* Service: Greenhouse State - Characteristic: Shift Register State - Pipe: TX */
#define PIPE_GREENHOUSE_STATE_SHIFT_REGISTER_STATE_TX          11
#define PIPE_GREENHOUSE_STATE_SHIFT_REGISTER_STATE_TX_MAX_SIZE 1

/* Service: Greenhouse State - Characteristic: Shift Register State - Pipe: SET */
#define PIPE_GREENHOUSE_STATE_SHIFT_REGISTER_STATE_SET          12
#define PIPE_GREENHOUSE_STATE_SHIFT_REGISTER_STATE_SET_MAX_SIZE 1

/* Service: Greenhouse Controls - Characteristic: Light Bank 1 Duty Cycle - Pipe: TX */
#define PIPE_GREENHOUSE_CONTROLS_LIGHT_BANK_1_DUTY_CYCLE_TX          13
#define PIPE_GREENHOUSE_CONTROLS_LIGHT_BANK_1_DUTY_CYCLE_TX_MAX_SIZE 1

/* Service: Greenhouse Controls - Characteristic: Light Bank 1 Duty Cycle - Pipe: SET */
#define PIPE_GREENHOUSE_CONTROLS_LIGHT_BANK_1_DUTY_CYCLE_SET          14
#define PIPE_GREENHOUSE_CONTROLS_LIGHT_BANK_1_DUTY_CYCLE_SET_MAX_SIZE 1

/* Service: Greenhouse Controls - Characteristic: Light Bank 2 Duty Cycle - Pipe: TX */
#define PIPE_GREENHOUSE_CONTROLS_LIGHT_BANK_2_DUTY_CYCLE_TX          15
#define PIPE_GREENHOUSE_CONTROLS_LIGHT_BANK_2_DUTY_CYCLE_TX_MAX_SIZE 1

/* Service: Greenhouse Controls - Characteristic: Light Bank 2 Duty Cycle - Pipe: SET */
#define PIPE_GREENHOUSE_CONTROLS_LIGHT_BANK_2_DUTY_CYCLE_SET          16
#define PIPE_GREENHOUSE_CONTROLS_LIGHT_BANK_2_DUTY_CYCLE_SET_MAX_SIZE 1

/* Service: Greenhouse Controls - Characteristic: Vent Servo Position - Pipe: TX */
#define PIPE_GREENHOUSE_CONTROLS_VENT_SERVO_POSITION_TX          17
#define PIPE_GREENHOUSE_CONTROLS_VENT_SERVO_POSITION_TX_MAX_SIZE 1

/* Service: Greenhouse Controls - Characteristic: Vent Servo Position - Pipe: SET */
#define PIPE_GREENHOUSE_CONTROLS_VENT_SERVO_POSITION_SET          18
#define PIPE_GREENHOUSE_CONTROLS_VENT_SERVO_POSITION_SET_MAX_SIZE 1

/* Service: Greenhouse User Adjustments - Characteristic: Temperature Setpoint - Pipe: SET */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_TEMPERATURE_SETPOINT_SET          19
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_TEMPERATURE_SETPOINT_SET_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Temperature Setpoint - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_TEMPERATURE_SETPOINT_RX_ACK_AUTO          20
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_TEMPERATURE_SETPOINT_RX_ACK_AUTO_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Humidity Setpoint - Pipe: SET */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_HUMIDITY_SETPOINT_SET          21
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_HUMIDITY_SETPOINT_SET_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Humidity Setpoint - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_HUMIDITY_SETPOINT_RX_ACK_AUTO          22
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_HUMIDITY_SETPOINT_RX_ACK_AUTO_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Humidity Necessity Coeff - Pipe: SET */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_HUMIDITY_NECESSITY_COEFF_SET          23
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_HUMIDITY_NECESSITY_COEFF_SET_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Humidity Necessity Coeff - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_HUMIDITY_NECESSITY_COEFF_RX_ACK_AUTO          24
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_HUMIDITY_NECESSITY_COEFF_RX_ACK_AUTO_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Temperature Necessity Coeff - Pipe: SET */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_TEMPERATURE_NECESSITY_COEFF_SET          25
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_TEMPERATURE_NECESSITY_COEFF_SET_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Temperature Necessity Coeff - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_TEMPERATURE_NECESSITY_COEFF_RX_ACK_AUTO          26
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_TEMPERATURE_NECESSITY_COEFF_RX_ACK_AUTO_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Venting Necessity Threshold - Pipe: SET */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_VENTING_NECESSITY_THRESHOLD_SET          27
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_VENTING_NECESSITY_THRESHOLD_SET_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Venting Necessity Threshold - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_VENTING_NECESSITY_THRESHOLD_RX_ACK_AUTO          28
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_VENTING_NECESSITY_THRESHOLD_RX_ACK_AUTO_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Venting Necessity Overshoot - Pipe: SET */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_VENTING_NECESSITY_OVERSHOOT_SET          29
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_VENTING_NECESSITY_OVERSHOOT_SET_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Venting Necessity Overshoot - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_VENTING_NECESSITY_OVERSHOOT_RX_ACK_AUTO          30
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_VENTING_NECESSITY_OVERSHOOT_RX_ACK_AUTO_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: DateTime - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_DATETIME_RX_ACK_AUTO          31
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_DATETIME_RX_ACK_AUTO_MAX_SIZE 4

/* Service: Greenhouse User Adjustments - Characteristic: Illumination On Time - Pipe: SET */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_ILLUMINATION_ON_TIME_SET          32
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_ILLUMINATION_ON_TIME_SET_MAX_SIZE 2

/* Service: Greenhouse User Adjustments - Characteristic: Illumination On Time - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_ILLUMINATION_ON_TIME_RX_ACK_AUTO          33
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_ILLUMINATION_ON_TIME_RX_ACK_AUTO_MAX_SIZE 2

/* Service: Greenhouse User Adjustments - Characteristic: Illumination Off Time - Pipe: SET */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_ILLUMINATION_OFF_TIME_SET          34
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_ILLUMINATION_OFF_TIME_SET_MAX_SIZE 2

/* Service: Greenhouse User Adjustments - Characteristic: Illumination Off Time - Pipe: RX_ACK_AUTO */
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_ILLUMINATION_OFF_TIME_RX_ACK_AUTO          35
#define PIPE_GREENHOUSE_USER_ADJUSTMENTS_ILLUMINATION_OFF_TIME_RX_ACK_AUTO_MAX_SIZE 2


#define NUMBER_OF_PIPES 35

#define SERVICES_PIPE_TYPE_MAPPING_CONTENT {\
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX_ACK_AUTO},   \
}

#define GAP_PPCP_MAX_CONN_INT 0x12 /**< Maximum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_MIN_CONN_INT  0xa /**< Minimum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_SLAVE_LATENCY 0
#define GAP_PPCP_CONN_TIMEOUT 0xa /** Connection Supervision timeout multiplier as a multiple of 10msec, 0xFFFF means no specific value requested */

#define NB_SETUP_MESSAGES 60
#define SETUP_MESSAGES_CONTENT {\
    {0x00,\
        {\
            0x07,0x06,0x00,0x00,0x03,0x02,0x41,0xfe,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x00,0x23,0x01,0x01,0x00,0x00,0x06,0x00,0x00,\
            0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x1c,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x08,0x00,0x90,0x01,0xff,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x38,0xff,0xff,0x02,0x58,0x0a,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,\
            0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x10,0x54,0x00,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x00,0x04,0x04,0x02,0x02,0x00,0x01,0x28,0x00,0x01,0x00,0x18,0x04,0x04,0x05,0x05,0x00,\
            0x02,0x28,0x03,0x01,0x02,0x03,0x00,0x00,0x2a,0x04,0x04,0x14,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x1c,0x0a,0x00,0x03,0x2a,0x00,0x01,0x47,0x52,0x45,0x45,0x4e,0x48,0x4f,0x55,0x53,0x45,\
            0x2e,0x63,0x6f,0x6d,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x38,0x05,0x05,0x00,0x04,0x28,0x03,0x01,0x02,0x05,0x00,0x01,0x2a,0x06,0x04,0x03,0x02,\
            0x00,0x05,0x2a,0x01,0x01,0x80,0x00,0x04,0x04,0x05,0x05,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x54,0x06,0x28,0x03,0x01,0x02,0x07,0x00,0x04,0x2a,0x06,0x04,0x09,0x08,0x00,0x07,0x2a,\
            0x04,0x01,0x0a,0x00,0x12,0x00,0x00,0x00,0x0a,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x70,0x02,0x02,0x00,0x08,0x28,0x00,0x01,0x01,0x18,0x04,0x04,0x10,0x10,0x00,0x09,0x28,\
            0x00,0x01,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x8c,0xe3,0x55,0x30,0x01,0xcc,0xe8,0x04,0x04,0x13,0x13,0x00,0x0a,0x28,0x03,0x01,0x10,\
            0x0b,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xa8,0xe3,0x55,0x33,0x01,0xcc,0xe8,0x16,0x00,0x05,0x04,0x00,0x0b,0x01,0x33,0x02,0x00,\
            0x00,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x0c,0x29,0x02,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xc4,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x0d,0x28,0x03,0x01,0x10,0x0e,0x00,0xda,0x1b,\
            0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x34,0x01,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xe0,0xcc,0xe8,0x16,0x00,0x05,0x04,0x00,0x0e,0x01,0x34,0x02,0x00,0x00,0x00,0x00,0x46,\
            0x14,0x03,0x02,0x00,0x0f,0x29,0x02,0x01,0x00,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xfc,0x13,0x13,0x00,0x10,0x28,0x03,0x01,0x10,0x11,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,\
            0xf8,0x40,0x64,0x0b,0xe3,0x55,0x31,0x01,0xcc,0xe8,0x16,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x18,0x05,0x04,0x00,0x11,0x01,0x31,0x02,0x00,0x00,0x00,0x00,0x46,0x14,0x03,0x02,0x00,\
            0x12,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x13,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x34,0x28,0x03,0x01,0x10,0x14,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,\
            0xe3,0x55,0x32,0x01,0xcc,0xe8,0x16,0x00,0x05,0x04,0x00,0x14,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x50,0x01,0x32,0x02,0x00,0x00,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x15,0x29,0x02,0x01,\
            0x00,0x00,0x04,0x04,0x10,0x10,0x00,0x16,0x28,0x00,0x01,0xda,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x6c,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x10,0x01,0xcc,0xe8,0x04,\
            0x04,0x13,0x13,0x00,0x17,0x28,0x03,0x01,0x12,0x18,0x00,0xda,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x88,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x11,0x01,0xcc,0xe8,0x16,\
            0x04,0x05,0x04,0x00,0x18,0x01,0x11,0x02,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xa4,0x46,0x14,0x03,0x02,0x00,0x19,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x13,0x13,0x00,\
            0x1a,0x28,0x03,0x01,0x12,0x1b,0x00,0xda,0x1b,0x66,0x89,0xf2,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xc0,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x12,0x01,0xcc,0xe8,0x16,0x04,0x05,0x04,0x00,\
            0x1b,0x01,0x12,0x02,0x00,0x00,0x00,0x00,0x46,0x14,0x03,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xdc,0x00,0x1c,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x1d,0x28,0x03,0x01,\
            0x12,0x1e,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0xf8,0x0b,0xe3,0x55,0x13,0x01,0xcc,0xe8,0x16,0x04,0x02,0x01,0x00,0x1e,0x01,0x13,0x02,\
            0x00,0x46,0x14,0x03,0x02,0x00,0x1f,0x29,0x02,0x01,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x14,0x04,0x04,0x13,0x13,0x00,0x20,0x28,0x03,0x01,0x12,0x21,0x00,0xda,0x1b,0x66,0x89,\
            0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x14,0x01,0xcc,0xe8,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x30,0x16,0x04,0x02,0x01,0x00,0x21,0x01,0x14,0x02,0x00,0x46,0x14,0x03,0x02,0x00,0x22,\
            0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x10,0x10,0x00,0x23,0x28,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x4c,0x00,0x01,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x20,0x01,\
            0xcc,0xe8,0x04,0x04,0x13,0x13,0x00,0x24,0x28,0x03,0x01,0x12,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x68,0x25,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x21,0x01,\
            0xcc,0xe8,0x16,0x04,0x02,0x01,0x00,0x25,0x01,0x21,0x02,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0x84,0x46,0x14,0x03,0x02,0x00,0x26,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x13,0x13,0x00,\
            0x27,0x28,0x03,0x01,0x12,0x28,0x00,0xda,0x1b,0x66,0x89,0xf2,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xa0,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x22,0x01,0xcc,0xe8,0x16,0x04,0x02,0x01,0x00,\
            0x28,0x01,0x22,0x02,0x00,0x46,0x14,0x03,0x02,0x00,0x29,0x29,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xbc,0x02,0x01,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x2a,0x28,0x03,0x01,0x12,0x2b,0x00,\
            0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xd8,0x23,0x01,0xcc,0xe8,0x16,0x04,0x02,0x01,0x00,0x2b,0x01,0x23,0x02,0x00,0x46,0x14,\
            0x03,0x02,0x00,0x2c,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x10,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x22,0xf4,0x10,0x00,0x2d,0x28,0x00,0x01,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,\
            0xe3,0x55,0x00,0x01,0xcc,0xe8,0x04,0x04,0x13,0x13,0x00,0x2e,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x10,0x28,0x03,0x01,0x0a,0x2f,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,\
            0xe3,0x55,0x02,0x01,0xcc,0xe8,0x46,0x14,0x05,0x04,0x00,0x2f,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x2c,0x01,0x02,0x02,0x00,0x00,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x30,0x28,0x03,0x01,\
            0x0a,0x31,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x48,0x0b,0xe3,0x55,0x01,0x01,0xcc,0xe8,0x46,0x14,0x05,0x04,0x00,0x31,0x01,0x01,0x02,\
            0x00,0x00,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x32,0x28,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x64,0x01,0x0a,0x33,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,\
            0x03,0x01,0xcc,0xe8,0x46,0x14,0x05,0x04,0x00,0x33,0x01,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x80,0x02,0x00,0x00,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x34,0x28,0x03,0x01,0x0a,0x35,\
            0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0x9c,0x55,0x04,0x01,0xcc,0xe8,0x46,0x14,0x05,0x04,0x00,0x35,0x01,0x04,0x02,0x00,0x00,\
            0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x36,0x28,0x03,0x01,0x0a,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xb8,0x37,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x05,0x01,\
            0xcc,0xe8,0x46,0x14,0x05,0x04,0x00,0x37,0x01,0x05,0x02,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xd4,0x00,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x38,0x28,0x03,0x01,0x0a,0x39,0x00,0xda,\
            0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x06,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x23,0xf0,0x01,0xcc,0xe8,0x46,0x14,0x05,0x04,0x00,0x39,0x01,0x06,0x02,0x00,0x00,0x00,0x00,\
            0x04,0x04,0x13,0x13,0x00,0x3a,0x28,0x03,0x01,0x08,0x3b,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x0c,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x07,0x01,0xcc,0xe8,\
            0x46,0x10,0x05,0x04,0x00,0x3b,0x01,0x07,0x02,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x28,0x00,0x04,0x04,0x13,0x13,0x00,0x3c,0x28,0x03,0x01,0x0a,0x3d,0x00,0xda,0x1b,0x66,\
            0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x08,0x01,0xcc,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x24,0x44,0xe8,0x46,0x14,0x03,0x02,0x00,0x3d,0x01,0x08,0x02,0x00,0x00,0x04,0x04,0x13,0x13,\
            0x00,0x3e,0x28,0x03,0x01,0x0a,0x3f,0x00,0xda,0x1b,0x66,0x89,\
        },\
    },\
    {0x00,\
        {\
            0x1b,0x06,0x24,0x60,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x09,0x01,0xcc,0xe8,0x46,0x14,0x03,0x02,\
            0x00,0x3f,0x01,0x09,0x02,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x00,0x01,0x33,0x02,0x00,0x02,0x04,0x00,0x0b,0x00,0x0c,0x01,0x34,0x02,0x00,0x02,0x04,\
            0x00,0x0e,0x00,0x0f,0x01,0x31,0x02,0x00,0x02,0x04,0x00,0x11,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x1c,0x00,0x12,0x01,0x32,0x02,0x00,0x02,0x04,0x00,0x14,0x00,0x15,0x01,0x11,0x02,0x00,\
            0x82,0x04,0x00,0x18,0x00,0x19,0x01,0x12,0x02,0x00,0x82,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x38,0x00,0x1b,0x00,0x1c,0x01,0x13,0x02,0x00,0x82,0x04,0x00,0x1e,0x00,0x1f,0x01,0x14,\
            0x02,0x00,0x82,0x04,0x00,0x21,0x00,0x22,0x01,0x21,0x02,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x54,0x82,0x04,0x00,0x25,0x00,0x26,0x01,0x22,0x02,0x00,0x82,0x04,0x00,0x28,0x00,0x29,\
            0x01,0x23,0x02,0x00,0x82,0x04,0x00,0x2b,0x00,0x2c,0x01,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x70,0x02,0x04,0x80,0x04,0x00,0x2f,0x00,0x00,0x01,0x01,0x02,0x04,0x80,0x04,0x00,0x31,\
            0x00,0x00,0x01,0x03,0x02,0x04,0x80,0x04,0x00,0x33,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x8c,0x01,0x04,0x02,0x04,0x80,0x04,0x00,0x35,0x00,0x00,0x01,0x05,0x02,0x04,0x80,0x04,\
            0x00,0x37,0x00,0x00,0x01,0x06,0x02,0x04,0x80,0x04,0x00,0x39,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0xa8,0x00,0x00,0x01,0x07,0x02,0x04,0x00,0x04,0x00,0x3b,0x00,0x00,0x01,0x08,0x02,0x04,\
            0x80,0x04,0x00,0x3d,0x00,0x00,0x01,0x09,0x02,0x04,0x80,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x07,0x06,0x40,0xc4,0x00,0x3f,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x13,0x06,0x50,0x00,0xda,0x1b,0x66,0x89,0xf2,0xb2,0xf8,0x40,0x64,0x0b,0xe3,0x55,0x00,0x00,0xcc,0xe8,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x60,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x07,0x06,0x60,0x38,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x19,0x06,0x70,0x00,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x06,0x06,0xf0,0x00,0x83,0xe0,0xa2,\
        },\
    },\
}

#endif
