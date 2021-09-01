// Accept dimensions of a cylinder and print the surface area and volume s

#include<stdio.h>

//   Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) 
void temperature(float f)
{
	float celsius,kelvin;
    
    celsius=(5*(f-32)/9);
    kelvin=celsius+273.15;
    printf("fahrenheit temperature in celsius is %f\n",celsius );
    printf("fahrenheit temperature in kelvin is %f\n",kelvin );
}

// Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and the
//distance (s) travelled.
void distanceTravelled(float velocity,float acceleration,float time)
{

    float v,s; 
    v=velocity+(acceleration*time);
    s=velocity+(acceleration*time*time);
    printf("final velocity is %f\n",v);
    printf("distance travelled is %f\n",s);

}


//Accept inner and outer radius of a ring and print the perimeter and area of the ring
void ring(float a,float b)
{
   float perimeter,area;
   perimeter=2*3.14*(a+b);
   area=3.14*((a*a)-(b*b));
   printf("perimeter of ring is %f\n",perimeter);
   printf("area of ring is %f\n",area);
}

//Accept two numbers and print arithmetic and harmonic mean of the two numbers

void mean(float a,float b)
{
  float AM,HM;
  AM=(a+b)/2;
  HM=(a*b)/(a+b);
  printf("arithmetic mean of two numbers is %f",AM);
  printf("harmonic mean of two numbers is %f",HM);
}

//Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and print surface
//area and volume

void cuboid(float length,float breadth,float height)
{
  float sArea,vol;
  sArea=2*((length*breadth)+(length*height)+(breadth*height));
  vol=length*breadth*height;
  printf("surfaceArea of cuboid is %f",sArea);
  printf("volume of cuboid is %f",vol);
}
int main(int argc, char const *argv[])
{
	float radius,height,surfaceArea,volume,f,velocity,acceleration,time,a,b,x,y,length,breadth,heightcuboid;
	
	printf("enter radius and height of cylinder\n");
	scanf("%f%f",&radius,&height);
    surfaceArea=(2*3.14*radius*radius)+2*3.14*radius*height;
    volume=3.14*radius*radius*height;
    printf("surfaceArea of cylinder is %f and volume of cylinder is %f",surfaceArea,volume);
    printf("enter temperature in fahrenheit");
    scanf("%f",&f);
    temperature(f);
    printf("enter velocity,acceleration and time");
    scanf("%f%f%f",&velocity,&acceleration,&time);
    distanceTravelled(velocity,acceleration,time);
    printf("enter inner and outer radius of ring\n");
    scanf("%f%f",&a,&b);
    ring(a,b);
    printf("enter two numbers to print arithmetic and harmonic mean\n");
    scanf("%f%f",&x,&y);
    mean(x,y);
    printf("enter length,breadth,height");
    scanf("%f%f%f",&length,&breadth,&heightcuboid);
	cuboid(length,breadth,heightcuboid);
	return 0;
}