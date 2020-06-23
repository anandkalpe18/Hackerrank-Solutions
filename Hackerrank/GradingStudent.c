int* gradingStudents(int grades_count, int* grades, int* result_count) {
    int i;
    
    for(i=0;i<4;i++){
        if(grades[i]<40&&grades[i]+grades[i]%5<40){
            continue;
        }
        if(grades[i]%5>2){
            grades[i]=grades[i]+grades[i]%5-1;
        }
    }
    result_count[4];
    for(i=0;i<4;i++){
        result_count[i]=grades[i];
    }
    return result_count;
    
}
