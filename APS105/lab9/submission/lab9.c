#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct patient{
    int ID;
    char name[101];
    int severity;
    struct patient* next;
}Patient;
typedef struct queue{
    struct patient* head;

}Queue;

//MAIN FUNCTIONS
bool Add_patient(Queue* patient_que,int ID, char* name, int severity);
void Display_queue(Queue* patient_que);
void Treat_patient(Queue* patient_que);
bool Remove_patient(Queue* patient_que, int ID);
void Quit_program(Queue* patient_que);

//HELPER FUNCTIONS
void free_queue(Queue* patient_que);
Patient* create_patient(int ID, char* name, int severity);
bool find_patient(Queue* patient_que,int ID);

int main(void){
    Queue Patient_Que;
    Patient_Que.head=NULL;
    char task='\0';
    while(true){
        scanf(" %c", &task);
        //specific substasks
        if(task=='Q'){
            Quit_program(&Patient_Que);
            return 0;
        }
        if(task=='A'){
            int ID, severity; char name[101];
            scanf("%d",&ID);
            scanf("%s",name);
            scanf("%d",&severity);
            Add_patient(&Patient_Que, ID, name, severity);
        }
        if(task=='D'){
            Display_queue(&Patient_Que);
        }
        if(task=='T'){
            Treat_patient(&Patient_Que);
        }
        if(task=='R'){
            int ID;
            scanf("%d",&ID);
            Remove_patient(&Patient_Que,ID);
        }
    }
    return 0;
}
//MAIN FUNCTIONS
bool Add_patient(Queue* patient_que,int ID, char* name, int severity){
    ////////////if the queue is empty/////////////
    if(patient_que->head==NULL){
        Patient* new_patient=create_patient(ID, name, severity);
        patient_que->head=new_patient;
        printf("Patient %d Added.\n", ID);
        return true;
    }
    

    //////////////if the queue is not empty, but there's already patient same ID/////////////
    if(find_patient(patient_que,ID)==true){
        printf("Error: Patient %d already exists.\n",ID);
        return false;//already exist
    }

    //////normal case///////
    Patient* new_patient=create_patient(ID, name, severity);//create a new patient
    //find the first severity which is smaller than new patient, insert infront of that
    Patient dummy={__INT_MAX__, "\0", __INT_MAX__, patient_que->head};
    Patient* prev=&dummy;
    Patient* current=dummy.next;
    while(current!=NULL){
        if(current->severity < severity){
            prev->next=new_patient;
            new_patient->next=current;
            printf("Patient %d Added.\n", ID);
            break;
        }
        prev=current;
        current=current->next;
    }
    ////////////if there's no severity smaller than new patient, insert in the end//////////////
    if(current==NULL){
        prev->next=new_patient;
        printf("Patient %d Added.\n", ID);
    }
    patient_que->head=dummy.next;//update the head
    dummy.next=NULL;
    current=NULL; prev=NULL;
    return true;
}
void Display_queue(Queue* patient_que){
    //if the queue is empty
    if(patient_que->head==NULL){
        printf("Queue is empty.\n");
        return ;
    }
    //normal case
    Patient* current=patient_que->head;
    while(current!=NULL){
        printf("%s %d\n", current->name, current->severity);
        current=current->next;
    }
}
void Treat_patient(Queue* patient_que){
    //if the queue is empty
    if(patient_que->head==NULL){
        printf("Queue is empty.\n");
        return;
    }
    //if the queue only has one patient
    if(patient_que->head!=NULL && patient_que->head->next==NULL){
        printf("Patient %d Treated.\n", patient_que->head->ID);
        free(patient_que->head);
        patient_que->head=NULL;
        return;
    }
    //normal case
    printf("Patient %d Treated.\n", patient_que->head->ID);
    Patient* second=patient_que->head->next;
    free(patient_que->head);
    patient_que->head=second;
    return ;
}
bool Remove_patient(Queue* patient_que, int ID){
    //////////////if the queue is empty//////////////
    if(patient_que->head==NULL){
        printf("Error: Patient %d not found.\n",ID);
        return false;
    }
    ///////////////if the ID can be found, deleted//////////////
    Patient dummy={__INT_MAX__, "\0", __INT_MAX__, patient_que->head};
    Patient* prev=&dummy;
    Patient* current=dummy.next;
    while(current!=NULL){
        if(current->ID==ID){
            prev->next=current->next;
            break;
        }
        prev=current;
        current=current->next;
    }
    ////////////if the ID cannot be found//////////////
    if(current==NULL){
        printf("Error: Patient %d not found.\n",ID);
        return false;
    }
    //update the head
    free(current);
    patient_que->head=dummy.next;
    dummy.next=NULL;
    prev=NULL;
    current=NULL;
    printf("Patient %d Removed.\n", ID);
    return true;
}
void Quit_program(Queue* patient_que){
    ////////////if the queue is empty//////////////
    if(patient_que->head==NULL){
        return;
    }
    //////////////normal case////////////
    Patient* current=patient_que->head;
    Patient* after=current->next;
    while(current!=NULL){
        after=current->next;
        //printf("free %s %d\n", current->name, current->severity);
        free(current); 
        current=after;
    }
    current=NULL;
    after=NULL;
    patient_que->head=NULL;
    //printf("free successfully!\n");
    return;
}

//HELPER FUNCTIONS
bool find_patient(Queue* patient_que,int ID){
    if(patient_que->head==NULL){
        return false;
    }
    //if the queue is empty
    Patient* current=patient_que->head;
    while(current!=NULL){
        if(current->ID==ID){
            return true;
        }
        current=current->next;
    }
    return false;
}
Patient* create_patient(int ID, char* name, int severity){
    Patient* new=malloc((size_t)sizeof(Patient));
    if(new!=NULL){
        new->ID=ID;
        strcpy(new->name, name);
        new->severity=severity;
        new->next=NULL;
        return new;
    }
    return NULL;
}
