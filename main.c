#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Teachers {
  char* fio;
  char* qualification;
  char* work_place;
  char* subject;
  char* address;
  char* phone;
} struct_teachers;


int WriteStruct(struct_teachers* base, int i, FILE *data_base){
    
    
    
    char* line_copy = (char*) malloc (185*sizeof(char));
    char* line = (char*) malloc (185*sizeof(char));
    char* temp = (char*) malloc (10*sizeof(char));
    
    printf("Запись %d: ", i);
    fgets(line, 185, stdin);
    strcpy (line_copy, line);
   
   if (strcmp (line, "stop\n") == 0) {
       
       return -1;
   }
   
   else {
   temp = strtok (line, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].fio, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].qualification, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].work_place, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].subject, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].address, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].phone, temp);

  if (strlen(base[i].phone) == 0 || strlen(base[i].address) == 0 || strlen(base[i].subject) == 0 || strlen(base[i].work_place) == 0 || strlen(base[i].qualification) == 0 || strlen(base[i].fio) == 0) {
      printf("\nНеверный формат данных\n");
      
      return -1;
    }
    
  else fwrite(line_copy, strlen(line_copy), sizeof(char), data_base);


}
   
   
   
   return 0;
   
}





int ShowStruct(int j, struct_teachers* base, char** fields_name) {
    int i;
    
    for (i = 0; i < 6; i++){
        
       printf("%10s", strtok(fields_name[i], "\n"));
        
    }
    printf("\n-----------------------------------------------------------------------");
    for (i = 0; i < j; i++){
        
        printf("\n");
        printf("%10s", base[i].fio);
        printf("%10s", base[i].qualification);
        printf("%10s", base[i].work_place);
        printf("%10s", base[i].subject);
        printf("%10s", base[i].address);
        printf("%10s", base[i].phone);
        
        
    }
    
    return 0;
}


int SearchStruct (int j, struct_teachers* base, char** fields_name){
    
    int i, flag = 0;
    
    char* search = (char*) malloc (10*sizeof(char));
    printf("Введите название того поля, по которому вы ходите искать: ");
    fgets(search, 10, stdin);
    
    for (i = 0; i < 6; i++){
        
       if(strcmp(search, fields_name[i]) == 0) {
           flag = 1;
       break;
       }
        
    }
    
    if (flag == 1) {
    printf("Введите то, что нужно искать: ");
    fgets(search, 10, stdin);
    search = strtok (search, "\n");
    
    switch(i){
        
        case 0: 
                for (i = 0; i < j; i++){
                   if (strcmp(search, base[i].fio) == 0){
                       
                    printf("%5s", base[i].fio);
                    printf("%5s", base[i].qualification);
                    printf("%5s", base[i].work_place);
                    printf("%5s", base[i].subject);
                    printf("%5s", base[i].address);
                    printf("%5s", base[i].phone);
                    printf("\n");
                       flag = 2;
                   }
                }
                if (flag != 2) printf("Ничего не нашлось.");
                break;
                
        case 1: 
                for (i = 0; i < j; i++){
                   if (strcmp(search, base[i].qualification) == 0){
                       
                    printf("%5s", base[i].fio);
                    printf("%5s", base[i].qualification);
                    printf("%5s", base[i].work_place);
                    printf("%5s", base[i].subject);
                    printf("%5s", base[i].address);
                    printf("%5s", base[i].phone);
                    printf("\n");
                       flag = 2;
                   }
                }
                if (flag != 2) printf("Ничего не нашлось.");
                break;
                
        case 2: 
                for (i = 0; i < j; i++){
                   if (strcmp(search, base[i].work_place) == 0){
                       
                    printf("%5s", base[i].fio);
                    printf("%5s", base[i].qualification);
                    printf("%5s", base[i].work_place);
                    printf("%5s", base[i].subject);
                    printf("%5s", base[i].address);
                    printf("%5s", base[i].phone);
                    printf("\n");
                       flag = 2;
                   }
                }
                if (flag != 2) printf("Ничего не нашлось.");
                break;
                
        case 3: 
                for (i = 0; i < j; i++){
                   if (strcmp(search, base[i].subject) == 0){
                       
                    printf("%5s", base[i].fio);
                    printf("%5s", base[i].qualification);
                    printf("%5s", base[i].work_place);
                    printf("%5s", base[i].subject);
                    printf("%5s", base[i].address);
                    printf("%5s", base[i].phone);
                    printf("\n");
                       flag = 2;
                   }
                }
                if (flag != 2) printf("Ничего не нашлось.");
                break;
                
        case 4: 
                for (i = 0; i < j; i++){
                   if (strcmp(search, base[i].address) == 0){
                       
                    printf("%5s", base[i].fio);
                    printf("%5s", base[i].qualification);
                    printf("%5s", base[i].work_place);
                    printf("%5s", base[i].subject);
                    printf("%5s", base[i].address);
                    printf("%5s", base[i].phone);
                    printf("\n");
                       flag = 2;
                   }
                }
                if (flag != 2) printf("Ничего не нашлось.");
                break;
                
        case 5: 
                for (i = 0; i < j; i++){
                   if (strcmp(search, base[i].phone) == 0){
                       
                    printf("%5s", base[i].fio);
                    printf("%5s", base[i].qualification);
                    printf("%5s", base[i].work_place);
                    printf("%5s", base[i].subject);
                    printf("%5s", base[i].address);
                    printf("%5s", base[i].phone);
                    printf("\n");
                       flag = 2;
                   }
                }
                if (flag != 2) printf("\nНичего не нашлось.\n");
                break;
        
    }
    }
    else printf("\nТакого поля не существует.\n");
    
    return 0;
}


int EditStruct(int j, struct_teachers* base) {
    int i;
    
    printf("Введите номер той записи, которую нужно изменить, начиная с 0: ");
    
    scanf("%d", &i);
    
    if (i < j && i >= 0) {
      printf("Введите саму запись: ");
      char* line = (char*) malloc (10*sizeof(char)); 
      char* temp = (char*) malloc (10*sizeof(char));
      getchar();
      fgets(line, 10, stdin);
      
    temp = strtok (line, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].fio, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].qualification, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].work_place, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].subject, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].address, temp);
   
   temp = strtok (NULL, " ");
   if (temp != NULL && strlen(temp)<=10) strcpy(base[i].phone, temp);

  if (strlen(base[i].phone) == 0 || strlen(base[i].address) == 0 || strlen(base[i].subject) == 0 || strlen(base[i].work_place) == 0 || strlen(base[i].qualification) == 0 || strlen(base[i].fio) == 0) {
      printf("\nНеверный формат данных\n");
      
      return 0;
    }
      
        
    }
    else printf("\nЗаданной записи не существует\n");
    
    return 0;
}




int RemoveStruct (int j, struct_teachers* base) {
    
    int i, a;
    
    printf("Введите номер той записи, которую нужно удалить, начиная с 0: ");
    
    scanf("%d", &i);
    
    if (i < j && i >= 0) {
        
        j--;
        
       for (a = i; a < j; a++){
           
           strcpy(base[a].fio, base[a+1].fio);
           strcpy(base[a].qualification, base[a+1].qualification);
           strcpy(base[a].work_place, base[a+1].work_place);
           strcpy(base[a].subject, base[a+1].subject);
           strcpy(base[a].address, base[a+1].address);
           strcpy(base[a].phone, base[a+1].phone);
           
       } 
        
        printf("\nЗаданная запись успешно удалена.\n");
        return 0;
    }
    
    else {
        printf("\nЗаданной записи не существует\n");
        return -1;
    }
    
}

int FullWriteStruct (int j, struct_teachers* base) {
    
    int i;
    FILE *data_base = fopen("base.txt", "w");
    char* space = (char*) malloc(sizeof(char));
    char* n = (char*) malloc(sizeof(char));
    space = " ";
    n = "\n";
    
    for (i = 0; i < j; i++){
        
       fwrite(base[i].fio, strlen(base[i].fio)*sizeof(char), 1, data_base);
       fwrite(space, sizeof(char), 1, data_base);
       
       fwrite(base[i].qualification, strlen(base[i].qualification)*sizeof(char), 1, data_base);
       fwrite(space, sizeof(char), 1, data_base);
        
       fwrite(base[i].work_place, strlen(base[i].work_place)*sizeof(char), 1, data_base);
       fwrite(space, sizeof(char), 1, data_base);
       
       fwrite(base[i].subject, strlen(base[i].subject)*sizeof(char), 1, data_base);
       fwrite(space, sizeof(char), 1, data_base);
       
       fwrite(base[i].address, strlen(base[i].address)*sizeof(char), 1, data_base);
       fwrite(space, sizeof(char), 1, data_base);
       
       fwrite(base[i].phone, strlen(base[i].phone)*sizeof(char), 1, data_base);
       fwrite(space, sizeof(char), 1, data_base);
       //fwrite(n, sizeof(char), 1, data_base);
        
    }
    
    
    fclose (data_base);
    return 0;
}


int ChangeLines (int i, struct_teachers* base){
    
    char* copy_line = (char*) malloc (10*sizeof(char));
    
    copy_line = base[i - 1].fio; 
    base[i - 1].fio = base[i].fio;
    base[i].fio = copy_line; 
    
    copy_line = base[i - 1].qualification; 
    base[i - 1].qualification = base[i].qualification;
    base[i].qualification = copy_line;
    
    copy_line = base[i - 1].work_place; 
    base[i - 1].work_place = base[i].work_place;
    base[i].work_place = copy_line;
    
    copy_line = base[i - 1].subject; 
    base[i - 1].subject = base[i].subject;
    base[i].subject = copy_line;
    
    copy_line = base[i - 1].address; 
    base[i - 1].address = base[i].address;
    base[i].address = copy_line;
    
    copy_line = base[i - 1].phone; 
    base[i - 1].phone = base[i].phone;
    base[i].phone = copy_line;
    
    return 0;
}


int SortStruct(int j, struct_teachers* base, char** fields_name) {
    int i, a;
  
  char* search = (char*) malloc (10*sizeof(char));
    printf("Введите название того поля, по которому вы ходите сортировать: ");
    fgets(search, 10, stdin);
    
    for (i = 0; i < 6; i++){
        
       if(strcmp(search, fields_name[i]) == 0) break;
        
    }
  
switch(i){
    
case 0:

for (int i = 0; i < j - 1; i++)
  {
    for (int a = (j - 1); a > i; a--) 
    {
      if (strcmp(base[a - 1].fio, base[a].fio) > 0) 
      {
        ChangeLines(a, base);
      }
    }
  }
  
  break;
  
case 1:

for (int i = 0; i < j - 1; i++)
  {
    for (int a = (j - 1); a > i; a--) 
    {
      if (strcmp(base[a - 1].qualification, base[a].qualification) > 0) 
      {
        ChangeLines(a, base);
      }
    }
  }
  
  break;
  
case 2:

for (int i = 0; i < j - 1; i++)
  {
    for (int a = (j - 1); a > i; a--) 
    {
      if (strcmp(base[a - 1].work_place, base[a].work_place) > 0) 
      {
        ChangeLines(a, base);
      }
    }
  }
  
  break;
  
case 3:

for (int i = 0; i < j - 1; i++)
  {
    for (int a = (j - 1); a > i; a--) 
    {
      if (strcmp(base[a - 1].subject, base[a].subject) > 0) 
      {
        ChangeLines(a, base);
      }
    }
  }
  
  break;
  
case 4:

for (int i = 0; i < j - 1; i++)
  {
    for (int a = (j - 1); a > i; a--) 
    {
      if (strcmp(base[a - 1].address, base[a].address) > 0) 
      {
        ChangeLines(a, base);
      }
    }
  }
  
  break;
  
case 5:

for (int i = 0; i < j - 1; i++)
  {
    for (int a = (j - 1); a > i; a--) 
    {
      if (strcmp(base[a - 1].phone, base[a].phone) > 0) 
      {
        ChangeLines(a, base);
      }
    }
  }
  
  break;
  
}

return 0;

}








int ReadLines () {
    
    FILE *data_base = fopen("base.txt", "r");
    fseek(data_base , 0 , SEEK_SET);
    char c;
    int i=0;
    while (feof(data_base) == 0){
     
     fread (&c, sizeof(char), 1, data_base);
     if (c == '\n') i++;  
     
    } 
    fclose(data_base);
    i--;
    printf("Текущее количество записей в базе: %d\n", i);
    return i;
}















int main(){
    int a, lines_count, i;
    FILE *data_base = fopen("base.txt", "w");
    fclose(data_base);
    struct_teachers* base = NULL;//объявили переменную типа нашей структуры
    char** fields_name = (char**) malloc (6 * sizeof(char*));
    printf("Введите название полей для базы данных (длина поля не более 10 символов): \n");
    
    for (i = 0; i<6; i++)
    {
       fields_name[i] = (char*) malloc (10 * sizeof(char)); 
      printf("Поле %d: ", i);
      fgets(fields_name[i], 10, stdin);
    }
    
for (;;){
    
printf("Меню: 1 - Заполнение базы данных; 2 - Показать базу данных; 3 - Поиск записи; 4 - Редактирование базы данных; 5 - Удаление выбранной записи из базы данных; 6 - Сортиоовка базы данных; 7 - Добавление записи в конец\n");
printf("Введите нужную цифру: ");
scanf("%d", &a);
getchar();

switch (a){
 
case 1: fflush(stdout); //чтобы не засорять ввобдимы данные для переменной line данными от переменной a
        printf("\nЗаполняйте базу данных. При необходимости закончить, напишите \"stop\". Рекомендуемая длина каждого поле - 10 символов. Желательно, чтобы поля были разделены 1 или более пробелов. Суммарная длина водимой строки не более 185 символов.\n");
        for (i = 0;;i++){
            
        base = (struct_teachers*) realloc (base, (i+1)*sizeof(struct_teachers));
        base[i].fio = (char*) calloc (10,sizeof(char));
        base[i].qualification = (char*) calloc (10,sizeof(char));
        base[i].work_place = (char*) calloc (10,sizeof(char));
        base[i].subject = (char*) calloc (10,sizeof(char));
        base[i].address = (char*) calloc (10,sizeof(char));
        base[i].phone = (char*) calloc (10,sizeof(char));
        FILE *data_base = fopen("base.txt", "a");
        a = WriteStruct(base, i, data_base);
        fclose(data_base);
        if (a == -1) {
            a = 0;
            free(base[i].fio);
            free(base[i].qualification);
            free(base[i].work_place);
            free(base[i].subject);
            free(base[i].address);
            free(base[i].phone);
            base = (struct_teachers*) realloc (base, (i)*sizeof(struct_teachers));
            break;
        }
        }
        
        lines_count = ReadLines();
        
        break;

case 2: ShowStruct(lines_count, base, fields_name);
        break;
        
case 3: fflush(stdout);
        SearchStruct(i, base, fields_name);
        break;
        
case 4: fflush(stdout);
        EditStruct(lines_count, base);
        FullWriteStruct(lines_count, base);
        break;
        
case 5: fflush(stdout);
            i = RemoveStruct (lines_count, base);
            if (i != -1){
            free(base[lines_count].fio);
            free(base[lines_count].qualification);
            free(base[lines_count].work_place);
            free(base[lines_count].subject);
            free(base[lines_count].address);
            free(base[lines_count].phone);
            base = (struct_teachers*) realloc (base, (lines_count)*sizeof(struct_teachers));
            }
        break;
        
case 6: fflush(stdout);
        SortStruct(i, base, fields_name);
        break;
        
case 7: fflush(stdout);
        for (i = lines_count;;i++){
        base = (struct_teachers*) realloc (base, (i+1)*sizeof(struct_teachers));
        base[i].fio = (char*) calloc (10,sizeof(char));
        base[i].qualification = (char*) calloc (10,sizeof(char));
        base[i].work_place = (char*) calloc (10,sizeof(char));
        base[i].subject = (char*) calloc (10,sizeof(char));
        base[i].address = (char*) calloc (10,sizeof(char));
        base[i].phone = (char*) calloc (10,sizeof(char));
        FILE *data_base = fopen("base.txt", "a+");
        a = WriteStruct(base, i, data_base);
        fclose(data_base);
        if (a == -1) {
            a = 0;
            free(base[i].fio);
            free(base[i].qualification);
            free(base[i].work_place);
            free(base[i].subject);
            free(base[i].address);
            free(base[i].phone);
            base = (struct_teachers*) realloc (base, (i)*sizeof(struct_teachers));
        break;
        }
        }
        
        lines_count = ReadLines();
        
        break;
        
default: printf("Неверно выбранный пункт меню\n");
 
 }
 }
 
 return 0;   
}
