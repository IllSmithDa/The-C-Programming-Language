#include <stdio.h>

typedef struct {
    int leg_count;
    float top_speed;
} Animal;

void gain_leg(Animal *p);

int main(void)
{
    Animal a = { 4, 65.0 };
    Animal b;

    a.leg_count = 3;
    gain_leg(&a);

    Animal *p;
    p = &a;
    p->leg_count = 12;  // Do this
    (*p).leg_count = 12; // This is equivalent, but don't do it   
}

void gain_leg(Animal *p)
{
    p->leg_count++;
}