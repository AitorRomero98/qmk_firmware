/* Copyright 2020 Rodolphe Belouin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdint.h>
#include <stdbool.h>
#include "action.h"

#ifndef SEQUENCER_STEP_MIN
#define SEQUENCER_STEP_MIN
#endif

bool process_sequencer(uint16_t keycode, keyrecord_t *record);
void sequencer_on(void);
void sequencer_off(void);
void sequencer_toggle(void);
void sequencer_decrease_tempo(void);
void sequencer_increase_tempo(void);
void sequencer_decrease_resolution(void);
void sequencer_increase_resolution(void);
void sequencer_set_all_steps_on(void);
void sequencer_set_all_steps_off(void);
