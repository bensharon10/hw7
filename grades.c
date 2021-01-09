#ifndef GRADES_C
#define GRADES_C

#include grades.h
#include linked-list.h

int grades_clone_t(struct grades *grades, struct grades **output){
	if(grades == NULL || output == NULL){
		return -1;
	}
	
	struct grades *new_grades = (struct grades*)malloc(sizeof(struct grades));
	if(new_grades == NULL){
		return -1;
	}
	
	new_grades = grades;
	output = &new_grades;
	return 0;
};

void grades_destroy_t(struct grades *grades){
	if(grades == NULL){
		return;
	}
	
	free(grades);
};

struct grades* grades_init(){
	
}

void grades_destroy(struct grades *grades){
	if(grades == NULL){
		return;
	}
	
	list_destroy(grades);
};

int grades_add_student(struct grades *grades, const char *name, int id){
	
};

int grades_add_grade(struct grades *grades,
                     const char *name,
                     int id,
                     int grade);

float grades_calc_avg(struct grades *grades, int id, char **out);

int grades_print_student(struct grades *grades, int id);

int grades_print_all(struct grades *grades);


#endif