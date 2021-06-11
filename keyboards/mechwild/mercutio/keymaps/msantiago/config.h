/* Copyright 2021 Kyle McCreery 
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

/* Define custom font */
#define OLED_FONT_H "keyboards/mechwild/mercutio/lib/mercutiofont.c"

/* Leader key settings */
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500
#define TAPPING_TERM 150
#define TAPPING TOGGLE 2
//#define ONESHOT_TAP_TOGGLE 2
//#define ONESHOT_TIMEOUT 5000