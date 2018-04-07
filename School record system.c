#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int student1_class,student1_roll,student1_contact,student2_class,student2_roll,student2_contact, student3_class,student3_roll,student3_contact,student4_class,student4_roll,student4_contact;

    char student1_name[30];
    char student1_fn[30];
    char student1_mn[30];
    char student1_ad[30];

    char student2_name[30];
    char student2_fn[30];
    char student2_mn[30];
    char student2_ad[30];

    char student3_name[30];
    char student3_fn[30];
    char student3_mn[30];
    char student3_ad[30];

    char student4_name[30];
    char student4_fn[30];
    char student4_mn[30];
    char student4_ad[30];
    char school[30];

    char student_scl_name[40];
    int teacher1_id,teacher1_contact;
    int teacher2_id,teacher2_contact;
    int teacher3_id,teacher3_contact;
    char teacher1_name[30];
    char teacher1_ad[30];
    char teacher2_name[30];
    char teacher2_ad[30];
    char teacher3_name[30];
    char teacher3_ad[30];
    char teacher_scl_name[30];
    char ojotha[30];
    int m,n,o;
    int s,u,v;
    float t;
    char student_add[100];
    char teacher_add[100];
    char class_Details[100];
    char result[100];

    printf("                                        .......School Record System.......\n");

    printf(" 1 For Student Add\n 2 For Teacher Add\n 3 For Class Details\n 4 For Result\n 5 For Read Student Details\n 6 For Read Teacher Details\n 7 For Read Class Details\n 8 For Read Result\n Enter Your Choice: ");
    scanf("%d",&v);
    if(v==1)
        {
    printf("                                         .........Student Add.........\n");
    printf("Student 1 Add\n");
    printf("Students name: \n");
    gets(student1_name);
    gets(student1_name);
    printf("Students Fathers Name: \n");
    gets(student1_fn);
    printf("Students Mothers Name: \n");
    gets(student1_mn);
    printf("Enter School Name: \n");
    gets(school);
    printf("Address: \n");
    gets(student1_ad);


    printf("Enter student's class: \n");
    scanf("%d", &student1_class);
    printf("Enter student's Roll: \n");
    scanf("%d", &student1_roll);
    printf("Enter student's contact: \n");
    scanf("%d", &student1_contact);

    gets(ojotha);



    printf("Student 2 Add\n");

    printf("Enter student name: \n");
    gets(student2_name);
    printf("Students Fathers Name: \n");
    gets(student2_fn);
    printf("Students Mothers Name: \n");
    gets(student2_mn);
    printf("Enter School Name: \n");
    gets(school);
    printf("Address: \n");
    gets(student2_ad);


    printf("Enter student's class: \n");
    scanf("%d", &student2_class);
    printf("Enter student's Roll: \n");
    scanf("%d", &student2_roll);
    printf("Enter student's contact: \n");
    scanf("%d", &student2_contact);


    gets(ojotha);




    printf("Student 3 Add\n");
    printf("Students name: \n");
    gets(student3_name);
    printf("Students Fathers Name: \n");
    gets(student3_fn);
    printf("Students Mothers Name: \n");
    gets(student3_mn);
    printf("Enter School Name: \n");
    gets(school);
    printf("Address: \n");
    gets(student3_ad);


    printf("Enter student's class: \n");
    scanf("%d", &student3_class);
    printf("Enter student's Roll: \n");
    scanf("%d", &student3_roll);
    printf("Enter student's contact: \n");
    scanf("%d", &student3_contact);

    gets(ojotha);





    printf("Student 4 Add\n");
    printf("Students name: \n");
    gets(student4_name);
    printf("Students Fathers Name: \n");
    gets(student4_fn);
    printf("Students Mothers Name: \n");
    gets(student4_mn);
    printf("Enter School Name: \n");
    gets(school);
    printf("Address: \n");
    gets(student4_ad);




    printf("Enter student's class: \n");
    scanf("%d", &student4_class);
    printf("Enter student's Roll: \n");
    scanf("%d", &student4_roll);
    printf("Enter student's contact: \n");
    scanf("%d", &student4_contact);

    FILE *fp;
    fp = fopen("D:\\Student_Details.text", "a");




    fprintf(fp, "Name: ");
    fprintf(fp, "%s\n",student1_name);
    fprintf(fp, "Father's Name: ");
    fprintf(fp, "%s\n",student1_fn);
    fprintf(fp, "Mother's Name: ");
    fprintf(fp, "%s\n",student1_mn);
    fprintf(fp, "School Name: ");
    fprintf(fp, "%s\n",school);
    fprintf(fp, "Address: ");
    fprintf(fp, "%s\n",student1_ad);

    fprintf(fp, "Class: %d\n", student1_class);
    fprintf(fp, "Roll: %d\n", student1_roll);
    fprintf(fp, "Contact: %d\n", student1_contact);

    fprintf(fp, "Name: ");
    fprintf(fp, "%s\n",student2_name);
    fprintf(fp, "Father's Name: ");
    fprintf(fp, "%s\n",student2_fn);
    fprintf(fp, "Mother's Name: ");
    fprintf(fp, "%s\n",student2_mn);
    fprintf(fp, "School Name: ");
    fprintf(fp, "%s\n",school);
    fprintf(fp, "Address: ");
    fprintf(fp, "%s\n",student2_ad);

    fprintf(fp, "Class: %d\n", student2_class);
    fprintf(fp, "Roll: %d\n", student2_roll);
    fprintf(fp, "Contact: %d\n", student2_contact);


    fprintf(fp, "Name: ");
    fprintf(fp, "%s\n",student3_name);
    fprintf(fp, "Father's Name: ");
    fprintf(fp, "%s\n",student3_fn);
    fprintf(fp, "Mother's Name: ");
    fprintf(fp, "%s\n",student3_mn);
    fprintf(fp, "School Name: ");
    fprintf(fp, "%s\n",school);
    fprintf(fp, "Address: ");
    fprintf(fp, "%s\n",student3_ad);

    fprintf(fp, "Class: %d\n", student3_class);
    fprintf(fp, "Roll: %d\n", student3_roll);
    fprintf(fp, "Contact: %d\n", student3_contact);

    fprintf(fp, "Name: ");
    fprintf(fp, "%s\n",student4_name);
    fprintf(fp, "Father's Name: ");
    fprintf(fp, "%s\n",student4_fn);
    fprintf(fp, "Mother's Name: ");
    fprintf(fp, "%s\n",student4_mn);
    fprintf(fp, "School Name: ");
    fprintf(fp, "%s\n",school);
    fprintf(fp, "Address: ");
    fprintf(fp, "%s\n",student4_ad);

    fprintf(fp, "Class: %d\n", student4_class);
    fprintf(fp, "Roll: %d\n", student4_roll);
    fprintf(fp, "Contact: %d\n", student4_contact);




    fclose(fp);
        }
        else if(v==2){
    printf("                                   ...........Teacher Add.........\n");

    printf("Teacher 1 Add\n");
    printf("Enter Teacher name: \n");
    gets(teacher1_name);
    gets(teacher1_name);
    printf("Enter Teachers Address: \n");
    gets(teacher1_ad);
    printf("Enter School name: \n");
    gets(teacher_scl_name);
    printf("Enter Teachers Id: \n");
    scanf("%d", &teacher1_id);
    printf("Enter Teachers Contact: \n");
    scanf("%d", &teacher1_contact);

    gets(ojotha);


    printf("Teacher 2 Add\n");

    printf("Enter Teacher name: \n");
    gets(teacher2_name);
    printf("Enter Teachers Address: \n");
    gets(teacher2_ad);
    printf("Enter School name: \n");
    gets(teacher_scl_name);
    printf("Enter Teachers Id: \n");
    scanf("%d", &teacher2_id);
    printf("Enter Teachers Contact: \n");
    scanf("%d", &teacher2_contact);

    gets(ojotha);


    printf("Teacher 3 Add\n");

    printf("Enter Teacher name: \n");
    gets(teacher3_name);
    printf("Enter Teachers Address: \n");
    gets(teacher3_ad);
    printf("Enter School name: \n");
    gets(teacher_scl_name);
    printf("Enter Teachers Id: \n");
    scanf("%d", &teacher3_id);
    printf("Enter Teachers Contact: \n");
    scanf("%d", &teacher3_contact);


    FILE *fp;
    fp = fopen("D:\\Teacher_Details.text", "a");







    fprintf(fp, "Teacher Name: %s\n",teacher1_name);
    fprintf(fp, "Teacher Address: %s\n",teacher1_ad);
    fprintf(fp, "School Name: %s\n",teacher_scl_name);
    fprintf(fp, "Id: %d\n", teacher1_id);
    fprintf(fp, "Contact: %d\n", teacher1_contact);


    fprintf(fp, "Teacher Name: %s\n",teacher2_name);
    fprintf(fp, "Teacher Address: %s\n",teacher2_ad);
    fprintf(fp, "School Name: %s\n",teacher_scl_name);
    fprintf(fp, "Id: %d\n", teacher2_id);
    fprintf(fp, "Contact: %d\n", teacher2_contact);

    fprintf(fp, "Teacher Name: %s\n",teacher3_name);
    fprintf(fp, "Teacher Address: %s\n",teacher3_ad);
    fprintf(fp, "School Name: %s\n",teacher_scl_name);
    fprintf(fp, "Id: %d\n", teacher3_id);
    fprintf(fp, "Contact: %d\n", teacher3_contact);

    fclose(fp);

        }
        else if(v==3){
            printf("                                   ..........Class Details..........\n");

    printf("Enter Class: ");
    scanf("%d",&m);
    printf("Enter Teacher Id: ");
    scanf("%d",&n);
    printf("Enter Student1 Roll: ");
    scanf("%d",&o);

    FILE *fp;
    fp = fopen("D:\\Class_Details.text", "a");

    fprintf(fp, "Class: %d\n", m);
    fprintf(fp, "Teachers Id: %d\n", n);
    fprintf(fp, "Student1 Roll: %d\n", o);

    fclose(fp);
        }
        else if(v==4){
    printf("                                           ...........Result..........\n");
    printf("Enter Class: ");
    scanf("%d",&u);
    printf("Enter Student Roll: ");
    scanf("%d",&s);
    printf("Enter Student Result: ");
    scanf("%f",&t);
    FILE *fp;
    fp = fopen("D:\\Result.text", "a");


   fprintf(fp, "class: %d\n",u);
   fprintf(fp, "Roll: %d\n",s);
   fprintf(fp, "Result: %0.2f\n",t);
   fclose(fp);
        }
        else if(v==5){
            FILE *fp;
    fp = fopen("D:\\Student_Details.text", "r");

    while(fgets(student_add, 100, fp)!=NULL)
        {
    puts(student_add);
          }

    fclose(fp);
        }
        else if(v==6){
            FILE *fp;
    fp = fopen("D:\\Teacher_Details.text", "r");

    while(fgets(teacher_add, 100, fp)!=NULL)
        {
    puts(teacher_add);
          }

    fclose(fp);
        }

        else if(v==7){
            FILE *fp;
    fp = fopen("D:\\Class_Details.text", "r");

    while(fgets(class_Details, 100, fp)!=NULL)
        {
    puts(class_Details);
          }

    fclose(fp);
        }
        else if(v==8){
            FILE *fp;
    fp = fopen("D:\\Result.text", "r");

    while(fgets(result, 100, fp)!=NULL)
        {
    puts(result);
          }

    fclose(fp);
        }
        else{
            printf("Wrong Input");
        }
        return 0;

}
