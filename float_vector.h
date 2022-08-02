//tipo de arquivo publico, contendo as **especificações**
typedef struct float_vector FloatVector;

FloatVector *create(int tam);
void destroy(FloatVector **ref_vector);
int size(const FloatVector *vector); //retorna o tamanho do vetor
int capacity(const FloatVector *vector); //retorna a capacidade
float at(const FloatVector *vector, int pos);
float get(const FloatVector *vector);
void append(FloatVector *vector, float n); //nserir algo dentro do vetor
void print(const FloatVector *vector);

/*
---------- poderia existir---------
bool compare(floatVector*, FloatVector) -- comparar os dois TADs

void join(FloatVector*, FloatVector) -- juntar/compactar duas TADs

void split(FloatVect*, FloatVecto)  -- dividir/separar as TADs
*/