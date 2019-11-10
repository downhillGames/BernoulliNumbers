#include <stdio.h>
#include <iostream> 
int main()
{

float V1 = 1;
float V2 = 2;
float V3 = 4;

float V4, V5, V6, V7, V8, V9, V10, V11, V12, V13 = 0;

 
float V21 = 1.0f / 6.0f;
float V22 = -1.0f / 30.0f;
float V23 = 1.0f / 42.0f;
float V24 = 0.0f;

/*Start the steps of the algorithm*/

/* Step 1 */
V4 = V5 =  V6 = V2 * V3;

/*Step 2 */
V4 = V4 - V1;

/*Step 3 */
V5 = V5 + V1;

/*Step 4 */
V11 = V4 / V5;

/*Step 5 */
V11 = V11 / V2;

/*Step 6 */
V13 = V13 - V11;

/*Step 7 */
V10 = V3 - V1;

/*Step 8 */
V7 = V2 + V7;

/*Step 9 */
V11 = V6 / V7;

/*Step 10 */
V12 = V21 * V11;

/*Step 11 */
V13 = V12 + V13;

/*Step 12 */
V10 = V10 - V1;

while ( V10 > 0)
{
    for (int i = 0; i < 2; i++){
        
        /*Step 13 / Step 17 */
        V6 = V6 - V1;
        
        /*Step 14 / Step 18 */
        V7 = V1 + V7;
        
        /*Step 15 / Step 19*/
        V8 = V6 / V7;
        
        /*Step 16 / Step 20 */
        V11 = V8 * V11;
        
    }
     
    /*Step 21*/
    if (V10 ==2 )
    {
        V12 = V22 * V11;
		
		
    }
    else
    {
        V12 = V23 * V11;
    }
    
    /*Step 22*/
    V13 = V12 + V13;
    
    /*Step 23*/
    V10 = V10 - V1;
    
   
}

 /*Step 24*/
V24 = V13 + V24;
    
/*Step 25*/
V3 = V3 + 1;



std::cout << "A0 + B1A1 + B3A3 + B5A5: " << V24 ;


return 0;
}
