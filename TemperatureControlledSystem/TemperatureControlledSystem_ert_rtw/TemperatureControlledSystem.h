/*
 * File: TemperatureControlledSystem.h
 *
 * Code generated for Simulink model 'TemperatureControlledSystem'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu May  7 16:56:18 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TemperatureControlledSystem_h_
#define RTW_HEADER_TemperatureControlledSystem_h_
#ifndef TemperatureControlledSystem_COMMON_INCLUDES_
#define TemperatureControlledSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                        /* TemperatureControlledSystem_COMMON_INCLUDES_ */

#include "TemperatureControlledSystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T durationCounter_1;          /* '<S1>/TemperatureControlledSystem' */
  uint32_T durationCounter_2;          /* '<S1>/TemperatureControlledSystem' */
  uint8_T is_c3_TemperatureControlledSyst;/* '<S1>/TemperatureControlledSystem' */
} DW_TemperatureControlledSyste_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int8_T temperature;                  /* '<Root>/temperature' */
} ExtU_TemperatureControlledSys_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T heaterStatus;                 /* '<Root>/heaterStatus' */
  real_T coolerStatus;                 /* '<Root>/coolerStatus' */
} ExtY_TemperatureControlledSys_T;

/* Real-time Model Data Structure */
struct tag_RTM_TemperatureControlled_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_TemperatureControlledSyste_T TemperatureControlledSystem_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_TemperatureControlledSys_T TemperatureControlledSystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TemperatureControlledSys_T TemperatureControlledSystem_Y;

/* Model entry point functions */
extern void TemperatureControlledSystem_initialize(void);
extern void TemperatureControlledSystem_step(void);
extern void TemperatureControlledSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TemperatureControlle_T *const TemperatureControlledSystem_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TemperatureControlledSystem'
 * '<S1>'   : 'TemperatureControlledSystem/TemperatureControlledSystem'
 * '<S2>'   : 'TemperatureControlledSystem/TemperatureControlledSystem/TemperatureControlledSystem'
 */
#endif                           /* RTW_HEADER_TemperatureControlledSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
