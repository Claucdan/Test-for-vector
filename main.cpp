#include <gtest/gtest.h>
#include "../library.c"

TEST(Creat_of_vector,Cheak_for_empty_for_0_size){
   vector heap;
   constructor(&heap,0);
   EXPECT_EQ(empty(&heap),true);
   EXPECT_EQ(size(&heap),0);
   EXPECT_EQ(max_size(&heap),0);
}
TEST(Creat_of_vector,Cheak_for_empty_for_n_size){
    vector heap;
    constructor(&heap,10);
    EXPECT_EQ(empty(&heap),true);
    EXPECT_EQ(size(&heap),0);
    EXPECT_EQ(max_size(&heap),10);
}





TEST(Push_back_to_vector_element,Push_back_int_for_0_size_vector){
    vector heap;
    constructor(&heap,0);
    int* tmp=(int*) malloc(sizeof(int));
    push_back(&heap,tmp);
    EXPECT_EQ(empty(&heap), false);
    EXPECT_EQ(size(&heap),1);
    EXPECT_EQ(max_size(&heap),1);
}
TEST(Push_back_to_vector_element,Push_back_int_for_0_size_vector_and_cheak_element){
    vector heap;
    constructor(&heap,0);
    int* tmp=(int*) malloc(sizeof(int));
    *tmp=15;
    push_back(&heap,tmp);
    int index=0;
    EXPECT_EQ(*(int*)at(&heap,&index), 15);
    EXPECT_EQ(size(&heap),1);
    EXPECT_EQ(max_size(&heap),1);
}
TEST(Push_back_to_vector_element,Push_back_int_for_n_size_vector){
    vector heap;
    constructor(&heap,10);
    int* tmp=(int*) malloc(sizeof(int));
    *tmp=15;
    push_back(&heap,tmp);
    EXPECT_EQ(size(&heap),1);
    EXPECT_EQ(max_size(&heap),10);
}
TEST(Push_back_to_vector_element,Push_back_int_for_n_size_vector_and_check_element){
    vector heap;
    constructor(&heap,10);
    int* tmp=(int*) malloc(sizeof(int));
    *tmp=15;
    push_back(&heap,tmp);
    int index=0;
    EXPECT_EQ(*(int*)at(&heap,&index), 15);
    EXPECT_EQ(size(&heap),1);
    EXPECT_EQ(max_size(&heap),10);
}





TEST(Pushes_back_to_vector_elements,Push_back_int_for_0_size_vector){
    vector heap;
    constructor(&heap,0);
    for(int i=0;i<10;i++){
        int* tmp=(int*)malloc(sizeof(int));
        *tmp=i;
        push_back(&heap,tmp);
    }
    EXPECT_EQ(empty(&heap), false);
    EXPECT_EQ(size(&heap),10);
    EXPECT_EQ(max_size(&heap),10);
}
TEST(Pushes_back_to_vector_elements,Push_back_int_for_0_size_vector_and_cheak_element){
    vector heap;
    constructor(&heap,0);
    for(int i=0;i<10;i++){
        int* tmp=(int*)malloc(sizeof(int));
        *tmp=i;
        push_back(&heap,tmp);
    }
    EXPECT_EQ(empty(&heap), false);
    EXPECT_EQ(size(&heap),10);
    EXPECT_EQ(max_size(&heap),10);
    for(int i=0;i<10;i++){
        EXPECT_EQ(*(int*)at(&heap,&i),i);
    }
}
TEST(Pushes_back_to_vector_elements,Push_back_int_for_n_size_vector){
    vector heap;
    constructor(&heap,10);
    for(int i=0;i<10;i++){
        int* tmp=(int*)malloc(sizeof(int));
        *tmp=i;
        push_back(&heap,tmp);
    }
    EXPECT_EQ(empty(&heap), false);
    EXPECT_EQ(size(&heap),10);
    EXPECT_EQ(max_size(&heap),10);
}
TEST(Pushes_back_to_vector_elements,Push_back_int_for_n_size_vector_and_cheak_element){
    vector heap;
    constructor(&heap,10);
    for(int i=0;i<10;i++){
        int* tmp=(int*)malloc(sizeof(int));
        *tmp=i;
        push_back(&heap,tmp);
    }
    EXPECT_EQ(empty(&heap), false);
    EXPECT_EQ(size(&heap),10);
    EXPECT_EQ(max_size(&heap),10);
    for(int i=0;i<10;i++){
        EXPECT_EQ(*(int*)at(&heap,&i),i);
    }
}
TEST(Pushes_back_to_vector_elements,Push_back_int_for_log2n_size_vector){
    vector heap;
    constructor(&heap,5);
    for(int i=0;i<10;i++){
        int* tmp=(int*)malloc(sizeof(int));
        *tmp=i;
        push_back(&heap,tmp);
    }
    EXPECT_EQ(empty(&heap), false);
    EXPECT_EQ(size(&heap),10);
    EXPECT_EQ(max_size(&heap),10);
}
TEST(Pushes_back_to_vector_elements,Push_back_int_for_log2n_size_vector_and_cheak_element){
    vector heap;
    constructor(&heap,5);
    for(int i=0;i<10;i++){
        int* tmp=(int*)malloc(sizeof(int));
        *tmp=i;
        push_back(&heap,tmp);
    }
    EXPECT_EQ(empty(&heap), false);
    EXPECT_EQ(size(&heap),10);
    EXPECT_EQ(max_size(&heap),10);
    for(int i=0;i<10;i++){
        EXPECT_EQ(*(int*)at(&heap,&i),i);
    }
}





TEST(Clear_vector,Clear_vector_this_0_elements){
    vector heap;
    constructor(&heap,0);
    EXPECT_NO_THROW({clear(&heap);});
    EXPECT_EQ(size(&heap),0);
    EXPECT_EQ(max_size(&heap),0);
}
TEST(Clear_vector,Clear_vector_this_size_n_but_0_elements){
    vector heap;
    constructor(&heap,10);
    EXPECT_NO_THROW({clear(&heap);});
    EXPECT_EQ(size(&heap),0);
    EXPECT_EQ(max_size(&heap),0);
}
TEST(Clear_vector,Clear_vector_this_n_elements){
    vector heap;
    constructor(&heap,10);
    for(int i=0;i<10;i++){
        int* tmp=(int*)malloc(sizeof(int));
        *tmp=i;
        push_back(&heap,tmp);
    }
    EXPECT_NO_THROW({clear(&heap);});
    EXPECT_EQ(size(&heap),0);
    EXPECT_EQ(max_size(&heap),0);
}





TEST(Begin_end_of_vector,Return_start_end_of_vector_this_0_elements){
    vector heap;
    constructor(&heap,0);
    EXPECT_NO_THROW(begin(&heap););
    EXPECT_NO_THROW(end(&heap););
}
TEST(CBegin_cend_of_vector,Return_start_end_of_vector_this_0_elements){
    vector heap;
    constructor(&heap,0);
    EXPECT_NO_THROW(cbegin(&heap););
    EXPECT_NO_THROW(cend(&heap););
}
TEST(Begin_end_of_vector,Return_start_end_of_vector_this_n_elements){
    vector heap;
    constructor(&heap,10);
    int* tmp=(int*)malloc(sizeof(int));
    *tmp=0;
    push_back(&heap,tmp);
    int* tor;
    for(int i=1;i<5;i++){
        tor=(int*)malloc(sizeof(int));
        *tor=i;
        push_back(&heap,tor);
    }
    EXPECT_EQ(begin(&heap),tmp);
    EXPECT_EQ(end(&heap),tor);
}
TEST(CBegin_Cend_of_vector,Return_start_end_of_vector_this_n_elements){
    vector heap;
    constructor(&heap,10);
    int* tmp=(int*)malloc(sizeof(int));
    *tmp=0;
    push_back(&heap,tmp);
    int* tor;
    for(int i=1;i<5;i++){
        tor=(int*)malloc(sizeof(int));
        *tor=i;
        push_back(&heap,tor);
    }
    EXPECT_EQ(cbegin(&heap),(const int*)tmp);
    EXPECT_EQ(cend(&heap),(const int*)tor);
}




