/* Copyright (c) 2019 Perlatecnica no-profit organization
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
 
// VERY SIMPLE CROSS LIGHT MANAGEMENT
 
#include "mbed.h"

#define RED 1
#define GREEN 0

#define GREEN_DURATION	2.0
#define RED_DURATION	0.5

DigitalOut crosslight1(D2);
DigitalOut crosslight2(D3);
DigitalOut crosslight3(D4);
DigitalOut crosslight4(D5);
DigitalOut myled(LED1);


int main() {
	// Initial value
    crosslight1 = RED;
    crosslight2 = RED;
    crosslight3 = RED;
    crosslight4 = RED;
    wait(GREEN_DURATION);
        
    
    while(1) {
		// Blinking onboard led
        myled = !myled;
		      
        crosslight1 = RED;
        crosslight2 = RED;
        crosslight3 = RED;
        crosslight4 = RED;
        wait(RED_DURATION);
        crosslight1 = GREEN;
        crosslight2 = RED;
        crosslight3 = RED;
        crosslight4 = RED;
        wait(GREEN_DURATION);
		
        crosslight1 = RED;
        crosslight2 = RED;
        crosslight3 = RED;
        crosslight4 = RED;
        wait(RED_DURATION);
        crosslight1 = RED;
        crosslight2 = GREEN;
        crosslight3 = RED;
        crosslight4 = RED;
        wait(GREEN_DURATION);
		
        crosslight1 = RED;
        crosslight2 = RED;
        crosslight3 = RED;
        crosslight4 = RED;
        wait(RED_DURATION);
        crosslight1 = RED;
        crosslight2 = RED;
        crosslight3 = GREEN;
        crosslight4 = RED;
        wait(GREEN_DURATION);
		
        crosslight1 = RED;
        crosslight2 = RED;
        crosslight3 = RED;
        crosslight4 = RED;
        wait(RED_DURATION);
        crosslight1 = RED;
        crosslight2 = RED;
        crosslight3 = RED;
        crosslight4 = GREEN;
		wait(GREEN_DURATION);
    }
}
