/*
 * MIT License
 *
 * Copyright (c) 2023 Jeremy O'Brien
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef MOVEMENT_CUSTOM_SIGNAL_TUNES_H_
#define MOVEMENT_CUSTOM_SIGNAL_TUNES_H_

#ifdef SIGNAL_TUNE_DEFAULT
int8_t signal_tune[] = {
    BUZZER_NOTE_C8, 5,
    BUZZER_NOTE_REST, 6,
    BUZZER_NOTE_C8, 5,
    0
};
#endif // SIGNAL_TUNE_DEFAULT

#ifdef SIGNAL_TUNE_ZELDA_SECRET
int8_t signal_tune[] = {
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_F5SHARP_G5FLAT, 8,
    BUZZER_NOTE_D5SHARP_E5FLAT, 8,
    BUZZER_NOTE_A4, 8,
    BUZZER_NOTE_G4SHARP_A4FLAT, 8,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_G5SHARP_A5FLAT, 8,
    BUZZER_NOTE_C6, 20,
    0
};
#endif // SIGNAL_TUNE_ZELDA_SECRET


#ifdef SIGNAL_TUNE_MELODY_RADIO
int8_t signal_tune[] = {
    BUZZER_NOTE_C6, 20,
    BUZZER_NOTE_REST,20,
    BUZZER_NOTE_C6, 20,
    BUZZER_NOTE_REST,20,
    BUZZER_NOTE_C6, 20,
    BUZZER_NOTE_REST,20,
    BUZZER_NOTE_E6, 40,
    BUZZER_NOTE_REST, 40,
    0
};
#endif // SIGNAL_TUNE_MELODY_RADIO

#ifdef SIGNAL_TUNE_STAR_WARS_THEME
int8_t signal_tune[] = {
    BUZZER_NOTE_A4, 16,        // La note principale
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_F4, 12,        // Changement de note
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 12,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_F4, 12,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 12,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_REST, 16,      // Petite pause
    BUZZER_NOTE_E5, 16,        // Nouvelle phrase musicale
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_E5, 16,
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_E5, 16,
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_F5, 12,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 12,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 16,
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_F4, 12,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 12,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 16,
    0                      // Fin de la mélodie
};
#endif // SIGNAL_TUNE_STAR_WARS_THEME


#ifdef SIGNAL_TUNE_IMPERIAL_MARCH
int8_t signal_tune[] = {
    BUZZER_NOTE_A4, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_A4, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_A4, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_F4, 14,        // Ta-da
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 30,        // Da-dam
    BUZZER_NOTE_REST, 10,
    BUZZER_NOTE_A4, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_F4, 14,        // Ta-da
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 30,        // Da-dam
    BUZZER_NOTE_REST, 10,
    BUZZER_NOTE_A4, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_E5, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_E5, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_E5, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_F5, 14,        // Ta-da
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 30,        // Da-dam
    BUZZER_NOTE_REST, 10,
    BUZZER_NOTE_A4, 20,        // Ta
    BUZZER_NOTE_REST, 4,
    BUZZER_NOTE_F4, 14,        // Ta-da
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 30,        // Da-dam
    BUZZER_NOTE_REST, 10,
    BUZZER_NOTE_A4, 20,        // Ta
    0                          // Fin de la mélodie
};
#endif // SIGNAL_TUNE_IMPERIAL_MARCH



#ifdef SIGNAL_TUNE_TAKE_FIVE
int8_t signal_tune[] = {
    BUZZER_NOTE_E5, 14,        // Première note
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_D5, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B4, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 14,        // Répétition
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_D5, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B4, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G4, 14,        // Descente
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_F4, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E4, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_D4, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C4, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B3, 14,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A3, 14,
    0                      // Fin de la mélodie
};
#endif // SIGNAL_TUNE_TAKE_FIVE

#ifdef SIGNAL_TUNE_MISSION_IMPOSSIBLE
int8_t signal_tune[] = {
    BUZZER_NOTE_E5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_F5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C6, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,        // Ta
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,        // Ta
    0                          // Fin de la mélodie
};
#endif // SIGNAL_TUNE_MISSION_IMPOSSIBLE

#ifdef SIGNAL_TUNE_TUBULAR_BELLS
int8_t signal_tune[] = {
    BUZZER_NOTE_E5, 8,       // Première note
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_C5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_C5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_C5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D5, 8,
    0                      // Fin de la mélodie
};
#endif // SIGNAL_TUNE_TUBULAR_BELLS

#ifdef SIGNAL_TUNE_OXYGENE_PART_IV
int8_t signal_tune[] = {
    BUZZER_NOTE_E5, 8,       // Première note
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C6, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C6, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_D6, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C6, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B5, 8,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A5, 8,
    0                      // Fin de la mélodie
};
#endif // SIGNAL_TUNE_OXYGENE_PART_IV

#ifdef SIGNAL_TUNE_BACH_PRELUDE
int8_t signal_tune[] = {
    BUZZER_NOTE_G4, 8,        // Première note
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_C5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_C6, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E6, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G6, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_F6, 8,        // Descente
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D6, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_B5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_F5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_B4, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G4, 8,
    BUZZER_NOTE_REST, 8,      // Petite pause
    BUZZER_NOTE_D4, 8,        // Nouveau motif
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_F4, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_A4, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_D5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_F5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_A5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_C5, 8,
    0                      // Fin de la mélodie
};
#endif // SIGNAL_TUNE_BACH_PRELUDE



#ifdef SIGNAL_TUNE_MARIO_THEME
int8_t signal_tune[] = {
    BUZZER_NOTE_E6, 7,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E6, 7,
    BUZZER_NOTE_REST, 10,
    BUZZER_NOTE_E6, 7,
    BUZZER_NOTE_REST, 11,
    BUZZER_NOTE_C6, 7,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E6, 7,
    BUZZER_NOTE_REST, 10,
    BUZZER_NOTE_G6, 8,
    BUZZER_NOTE_REST, 30,
    BUZZER_NOTE_G5, 8,
    0
};
#endif // SIGNAL_TUNE_MARIO_THEME

#ifdef SIGNAL_TUNE_KIM_POSSIBLE
int8_t signal_tune[] = {
    BUZZER_NOTE_G7, 6,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G4, 3,
    BUZZER_NOTE_REST, 5,
    BUZZER_NOTE_G7, 6,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G4, 3,
    BUZZER_NOTE_REST, 5,
    BUZZER_NOTE_A7SHARP_B7FLAT, 6,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G7, 6,
    0
};
#endif // SIGNAL_TUNE_KIM_POSSIBLE

#endif // MOVEMENT_CUSTOM_SIGNAL_TUNES_H_
