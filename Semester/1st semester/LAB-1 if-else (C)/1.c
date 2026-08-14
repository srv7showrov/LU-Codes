
#include<stdio.h>

int main (){
    float attendance_per;
    int assignment_num;
    char ID;
    
    scanf("%f %d %c", &attendance_per, &assignment_num, &ID);
    
    if(attendance_per > 100 || attendance_per < 0 || assignment_num < 0)
    {
        printf("Invalid data");
    }
    
    else if(attendance_per > 75 && assignment_num >= 3 && ID == 'Y')
    {
        printf("Status: Eligible");
    }
    
    else if(attendance_per > 75 && assignment_num >= 3 && ID == 'N')
    {
        printf("Status: Eligible - Collect ID from office");
    }
    
    else if(attendance_per >= 60 && attendance_per < 75 && assignment_num >= 3)
    {
        printf("Status: Conditionally eligible - Pay fine");
    }
    
    else if(attendance_per < 60 || assignment_num < 3)
    {
        printf("Status: Not eligible");
    }
    
    return 0;
}