Tower of Hanoi (Recursion)

Algorithm TOWER_OF_HANOI(n, Source, Destination, Auxiliary)

Step 1: If n = 1 then
 Print "Move disk 1 from Source to Destination"
 Return
Step 2: Call TOWER_OF_HANOI(n-1, Source, Auxiliary, Destination)
Step 3: Print "Move disk n from Source to Destination"
Step 4: Call TOWER_OF_HANOI(n-1, Auxiliary, Destination, Source)
Step 5: End
  
program:

#include <stdio.h>
void tower(int n, char from, char to, char aux) {
 if (n == 1) {
 printf("Move disk 1 from %c to %c\n", from, to);
 return;
 }
 tower(n-1, from, aux, to);
 printf("Move disk %d from %c to %c\n", n, from, to);
 tower(n-1, aux, to, from);
}
int main() {
 int n;
 printf("Enter number of disks: ");
 scanf("%d", &n);
 tower(n, 'A', 'C', 'B');
 return 0;
}
