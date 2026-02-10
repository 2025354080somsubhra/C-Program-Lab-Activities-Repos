// // Q1
// #include <stdio.h>

// // Declaration of data structure
// typedef struct {
//     float real;
//     float imag;
// } Complex;

// // Declaration of operations
// void input(Complex *c);
// void display(Complex c);
// Complex Add(Complex a, Complex b);
// Complex Sub(Complex a, Complex b);
// Complex Mul(Complex a, Complex b);

// int main()
// {
//     Complex num1, num2, num3;

//     printf("Enter first complex number:\n");
//     input(&num1);

//     printf("Enter second complex number:\n");
//     input(&num2);

//     num3 = Add(num1, num2);
//     printf("Addition = ");
//     display(num3);

//     num3 = Sub(num1, num2);
//     printf("Subtraction = ");
//     display(num3);

//     num3 = Mul(num1, num2);
//     printf("Multiplication = ");
//     display(num3);

//     return 0;
// }

// // Implementation of operations

// void input(Complex *c)
// {
//     printf("Enter real part: ");
//     scanf("%f", &c->real);
//     printf("Enter imaginary part: ");
//     scanf("%f", &c->imag);
// }

// void display(Complex c)
// {
//     if (c.imag >= 0)
//         printf("%.2f + %.2fi\n", c.real, c.imag);
//     else
//         printf("%.2f - %.2fi\n", c.real, -c.imag);
// }

// Complex Add(Complex a, Complex b)
// {
//     Complex r;
//     r.real = a.real + b.real;
//     r.imag = a.imag + b.imag;
//     return r;
// }

// Complex Sub(Complex a, Complex b)
// {
//     Complex r;
//     r.real = a.real - b.real;
//     r.imag = a.imag - b.imag;
//     return r;
// }

// Complex Mul(Complex a, Complex b)
// {
//     Complex r;
//     r.real = (a.real * b.real) - (a.imag * b.imag);
//     r.imag = (a.real * b.imag) + (a.imag * b.real);
//     return r;
// }

// Q2
#include <stdio.h>
#include <string.h>

#define N 10

struct Student {
    char name[50];
    int roll_no;
    char mobile_no[15];
    float CGPA;
    char DoB[15];
    char course[30];
    int year;
};

// Function declarations
void readStudent(struct Student *s);
void displayStudent(struct Student s);

int main()
{
    struct Student students[N];
    int i, topperIndex = 0;

    printf("Enter details of %d students:\n\n", N);
    for (i = 0; i < N; i++) {
        printf("Student %d:\n", i + 1);
        readStudent(&students[i]);
        printf("\n");
    }

    // Find topper (highest CGPA)
    for (i = 1; i < N; i++) {
        if (students[i].CGPA > students[topperIndex].CGPA) {
            topperIndex = i;
        }
    }

    printf("====================================\n");
    printf("Topper of the class:\n");
    displayStudent(students[topperIndex]);

    return 0;
}

// Function to read one student
void readStudent(struct Student *s)
{
    printf("Name: ");
    scanf(" %[^\n]", s->name);

    printf("Roll No: ");
    scanf("%d", &s->roll_no);

    printf("Mobile No: ");
    scanf(" %s", s->mobile_no);

    printf("CGPA: ");
    scanf("%f", &s->CGPA);

    printf("Date of Birth (DD/MM/YYYY): ");
    scanf(" %s", s->DoB);

    printf("Course: ");
    scanf(" %[^\n]", s->course);

    printf("Year: ");
    scanf("%d", &s->year);
}

// Function to display one student
void displayStudent(struct Student s)
{
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Mobile No : %s\n", s.mobile_no);
    printf("CGPA      : %.2f\n", s.CGPA);
    printf("DoB       : %s\n", s.DoB);
    printf("Course    : %s\n", s.course);
    printf("Year      : %d\n", s.year);
}