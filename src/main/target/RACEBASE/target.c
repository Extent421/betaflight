/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/timer.h"


const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    { TIM2,  IO_TAG(PA0),  TIM_Channel_1, TIM2_IRQn, TIM_USE_PPM,   1, GPIO_AF_1},
    { TIM4,  IO_TAG(PB6),  TIM_Channel_1, TIM4_IRQn, TIM_USE_MOTOR, 1, GPIO_AF_2}, // PWM2 - PC6
    { TIM4,  IO_TAG(PB7),  TIM_Channel_2, TIM4_IRQn, TIM_USE_MOTOR, 1, GPIO_AF_2}, // PWM3 - PC7
    { TIM4,  IO_TAG(PB8),  TIM_Channel_3, TIM4_IRQn, TIM_USE_MOTOR, 1, GPIO_AF_2}, // PMW4 - PC8
    { TIM4,  IO_TAG(PB9),  TIM_Channel_4, TIM4_IRQn, TIM_USE_MOTOR, 1, GPIO_AF_2}, // PWM5 - PC9
};


