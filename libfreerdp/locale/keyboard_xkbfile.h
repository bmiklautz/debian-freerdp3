/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * XKB Keyboard Mapping
 *
 * Copyright 2009-2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_LIB_LOCALE_KEYBOARD_XKB_H
#define FREERDP_LIB_LOCALE_KEYBOARD_XKB_H

#include <freerdp/types.h>
#include <freerdp/locale/keyboard.h>
#include <freerdp/api.h>

FREERDP_LOCAL int freerdp_keyboard_init_xkbfile(DWORD* keyboardLayoutId,
                                                DWORD* x11_keycode_to_rdp_scancode, size_t count);

#endif /* FREERDP_LIB_LOCALE_KEYBOARD_XKB_H */
