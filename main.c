#include <stdio.h>

typedef struct{
  int input_dim;
  int output_dim;
  int number_of_hidden;
  int* hidden_dim;
  int* input_layer;
  int* output_layer;
  int** hidden_layers;
}

void add_input_layer(NN* nn, int input_dim){
   
}

int main(){
  
  NN nn;
  int input_dim, dim_out, number_hidden;
  int* hidden_dim;
  add_input_layer(&nn,input_dim);
  add_hidden_layers(&nn,hidden_dim);
  add_output_layer(&nn,dim_out);
  
  return 0;
}



