1. Dereference : Grabbing the underlying value that is located in a particular address
  * int x  = 10; 
    int *p = &x;  // address of x

    printf("%d\n", *p) // deference the pointer and grab 10 from x 
                       // which p is pointing to. *p will print 10. 

2. Heap - The region of your computer's memory that is not automatically managed for you and not tightly managed by the CPU. It is more free floating region of memory and larger. In practice, using malloc or calloc is how you allocate memory onto the heap and deallocate using the free() function. Failure to do so leads to memory leaks which is a problem but the heap does not have size restrictions on variable size apart of hardware limitations and used globally which means it can be accessed by any function in the program. 

3. Stack - This is where all the system stores temporary variables created by each function including main function. The stack follows a 'last in first out' or 'LIFO' data structure and lives close to the CPU. In fact, teh space is managed by the CPU quite efficiently. There is a stack size limit, variables cannot be resized but it does give you very fast access

4. Kernel - It is a computer program that operates as the core of the operating system. It is one of the first programs loaded on a start up and connects the application software to the hardware of the computer. 

5. Structs - They are basically the closest thing to an object in c. They are global and can be accessed by any function. 

struct animal {
  int leg_count;
  float topspeed'
} // creates a new type which here is type struct animal

int main(void) {
  struct animal a = {4, 56.3} // initializing stuct and matching variable types in struct
  
  a.leg_count = 3;   //initialize struct explicitly using props in the structs
  a.leg_count--;

  struct animal *p
  p = &a;
  (*p).leg_count = 12; // both do the same thing 
  p->leg_count = 12; // both dereferences the pointer
  
  lose_leg(&a) // calling function below using address instead of copy
}

void loseLeg(struct animal *p) {
  p->legCout--;  // legCount reduced to 11 
}
l

struct animal{
  int legcount;
  float speed;
} b;   //initilzze struct immediately after creation of struct
b.legcount = 12;

struct animal {
  int legCout;
  float speed;
}
Animal b;
typedef struct animal Animal // another way to declare struct animal and creates a new type;
typedef int beef // creats a new type beef which will work exactly the same as an integer;
typedef struct animal {  // 'animal'now becomes optional as 'Animal' is what is referenced
;  int legCount;
  float speed 
}Animal;

