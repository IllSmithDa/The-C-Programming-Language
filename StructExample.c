#include <stdio.h>

typedef enum {
    MAMMAL,
    BIRD,
    FISH,
    REPTILE,
    AMPHIBIAN
} animal_type;

typedef struct {
    int leg_count;
    float top_speed;
    animal_type type;
} Animal;

void animal_init(Animal *a, float speed, animal_type type);
void animal_gain_leg(Animal *a);

int main(void)

{
    Animal a;
    Animal b;
    int x = BIRD;

    animal_init(&a, 10, REPTILE);
    animal_init(&b, 65, FISH);

    a.leg_count = 3;
    animal_gain_leg(&a);

    Animal *p;
    p = &a;

    p->leg_count = 12;  // Do this
    (*p).leg_count = 12; // This is equivalent, but don't do it
}

void animal_init(Animal *a, float speed, animal_type type)
{
    a->leg_count = 4;
    a->top_speed = speed;
    a->type = type;
}

void animal_gain_leg(Animal *a)
{
    a->leg_count++;
}