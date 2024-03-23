/*
 * Copyright (c) 2024 Marcel Licence
 */

/**
 * @file    ml_smpl_stream_ply.h
 * @author  Marcel Licence
 * @date    21.03.2024
 *
 * @brief   This file contains the prototypes of functions for using the sample stream player module/library
 */


#ifndef ML_SMPL_STREAM_PLY_H_
#define ML_SMPL_STREAM_PLY_H_


#include <stdint.h>


void SampleStreamPly_Process(int16_t *chL, int16_t *chR, uint32_t count);
bool SampleStreamPlayer_Init(void);
bool SampleStreamPlayer_SetFilename(uint8_t note, char *filename);
void SampleStreamPlayer_BkgProc(void);
void SampleStreamPlayer_NoteOn(uint8_t note, uint8_t vel);
void SampleStreamPlayer_NoteOff(uint8_t note);


/*
 * callbacks
 * the following functions are required to be defined in your project (main sketch)
 */
void SampleStreamPlayer_ErrorMsg(const char *msg);
void *SampleStreamPlayer_Malloc(uint32_t size);


#endif /* ML_SMPL_STREAM_PLY_H_ */
