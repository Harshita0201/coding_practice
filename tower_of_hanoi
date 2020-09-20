/* Problem 1: Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3) No disk may be placed on top of a smaller disk. */

#include <stdio.h>
 
void tower_of_hanoi(int, char, char, char);
 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    tower_of_hanoi(num, 'A', 'C', 'B'); // A B C are names of the towers
    return 0;
}
void tower_of_hanoi(int num, char from_rod, char to_rod, char aux_rod)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", from_rod, to_rod);
        return;
    }
    tower_of_hanoi(num - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from peg %c to peg %c", num, from_rod, to_rod);
    tower_of_hanoi(num - 1, aux_rod, to_rod, from_rod);
}
