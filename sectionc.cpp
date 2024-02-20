//this is the basic structure of a program.
#include <iostream>
#include <cmath>

int main(){

//1. this section is just variables declared to be stored in   
float lengthx;
float widthx;
float x1;
float x2;
float x;
float discriminant;
float a;
float b;
float c;
float volume;

//2. this section prompts inputs
std::cout<<"\nEnter the length value (cm): ";
std::cin>>lengthx;
std::cout<<"Enter the width value (cm): ";
std::cin>>widthx;

//This is just me brainstorming the formulas.
//(x)(lengthx - 2x)(widthx-2x);
//lengthx * widthx - 2x * lengthx - 2x * widthx + 4x^2 
//4x^3 - (2(lengthx+widthx)(x^2)) +(lengthx*widthx)x
//12x^2 - (4(lengthx-widthx)(x)) + (lengthx*widthx)

//3. this section is inserting imputs into variables accordingly to the calculations above
a = 12;
b = -(4*(lengthx + widthx));
c = lengthx * widthx;
discriminant = ((b)*(b)) - 4 * a * c;

//4. this section is testing whether or not the inputs are realistic for the problem
if(lengthx > 0 and widthx > 0){
    x1 = (-b + sqrt(discriminant)) / (2*a);
    x2 = (-b - sqrt(discriminant)) / (2*a);

    //5. this section is chosing the correct x that is within domain 0 < x < side/2
        if(x1 > 0 & x1 < widthx/2 & x1 < lengthx/2){
            x = x1;
        }

        if(x2 > 0 & x2 < widthx/2 & x2 < lengthx/2){
            x = x2;
        }
    //6. this section is calculating the volume
        volume = (x)*(widthx-(2*x))*(lengthx-(2*x));

    //7. this section is displaying the functions, volume, and x.
        std::cout<<"\nVolume function is V(x) = 4x^3 " << 2*(-lengthx-widthx) << "x^2 + " << lengthx*widthx << "x\n\n";
        std::cout<<"Derivative function is V'(x) = 12x^2 " << b << "x + " << c << "\n\n";
        std::cout<<"Maximum volume is " << volume << " cm^3 when x is " << x << " cm.\n\n";
}

//8. this section is in case the inserted variables is not realistic (when it is smaller than 0)
else{
    std::cout<<"\nError, no solution. Dimension must be a number, mut not be negative, must exist, and must be larger than 0.\n\n";
}

}
