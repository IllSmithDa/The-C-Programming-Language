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

  animal_init(&a, 19); // calling animal init passing in values
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

// function creating a instance animal struct 
void animal_init(Animal *a  float speed) {
  a->legCount = 4;
  a->legSpeed = 3;
}

enum animal_type { // enum holds animal types
  MAMMAL,
  BIRD,
  FISH
}animal_type;

typedef struct {
  int legCount;
  float speed;
  animal_type type; // refers to the enum class and is refferenced by type
}
int x = BIRD; (also known as 1)
animal_init(&a, 12, x);

6. Operating Systems - Processes - Every operating system provides processes which are applications that run in user space. Process run in their own address space which means that variables in one processes are not visible to other process unless both explicity agree to communicate. 

Threads - Thread ares processed that do share address space. A single process will often spawn a number of threads to handle tasks with each thread having access to all the variables in the process.

Scheduling. Computers that has 4 cores can only run 4 programs at once but can handle hundreds of processes because the kernel switches which process gets run and gets switch into and out of core. Whenver a process is paused, the entire execution state is saved into main memory before the next process is loaded from main memory and execution is resumed. 

Memory : Operating system is responsible for providing user programs access to meory by creating stack frame when program begins to execute and allocates a section of free memory for program to use. One vulnerability is that if a process is able to gain access to more memory than what it has been assigned to it, it can hijack the system. The program should have no knowledge of any memory than what has been allocated by the operating system. 

Drivers: Drivers combine multiple languages including assembly, C, and intterupt driven programming to provide software control to hardware devices. It hides the detailsof communication from hardware to software developers. Hardware is built with PCIx bus controller and all drivers are written to control hardware on the other side of the PCIx bus.


7. String comparisons 

  s1 = "alpha1";
  s2 = "alpha2";

if(s1 == s2) // this will never happen

if(strcmp(s1, s2)) // Use 'strcmp' to actually campare two strings

a b c d e f \0
{
  int c = 0; 
  char*p = s;

  while (*p  != '\0') {
    c++;
    p++;
  }
  return c
}

a b c d e f \0
{
  char*p = s;

  while (*p  != '\0') {
    p++; // move onto the next character
  }
  return p-s; // pointer arithemetic  or difference between the addresses. 
  // f-a will return 5.
}