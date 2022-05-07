#include "pitches.h"

int tonepin = 12; 
int melody[] = { NOTE_C5,NOTE_C5,NOTE_C5,NOTE_C5,NOTE_C5, 
					NOTE_E5,NOTE_G5,NOTE_G5,NOTE_E5,NOTE_C5, 
					NOTE_G5,NOTE_G5,NOTE_E5,NOTE_G5,NOTE_G5,NOTE_E5, 
					NOTE_C5,NOTE_C5,NOTE_C5, 
					
					NOTE_G5,NOTE_G5,NOTE_E5,NOTE_C5, 
					NOTE_G5,NOTE_G5,NOTE_G5, 
					NOTE_G5,NOTE_G5,NOTE_E5,NOTE_C5, 
					NOTE_G5,NOTE_G5,NOTE_G5, 
					
					NOTE_G5,NOTE_G5,NOTE_E5,NOTE_C5, 
					NOTE_G5,NOTE_G5,NOTE_G5,NOTE_A5,NOTE_G5, 
					NOTE_C6,NOTE_G5,NOTE_C6,NOTE_G5, 
					NOTE_E5,NOTE_D5,NOTE_C5 }; 

int noteDurations[]={ 	4,8,8,4,4, 
							4,8,8,4,4, 
							8,8,4,8,8,4, 
							4,4,2, 
							4,4,4,4, 
							4,4,2, 
							4,4,4,4, 
							4,4,2, 
							4,4,4,4, 
							8,8,8,8,2, 
							4,4,4,4, 
							4,4,2 }; 

void setup() { 
} 

void loop() { 
	for (int i = 0; i < 49; i++) { 
		int Durations = 1000/noteDurations[i]; // 음계의 음길이 계산 
		tone(tonepin, melody[i], Durations); 
		int pauseBetweenNotes = Durations *1.3 ; 
		delay(pauseBetweenNotes); 
		noTone(tonepin); 
	} 
}
