/*1) Criar uma função para ordenar os elementos de um vetor de tamanho 'n'.*/
//ordenar os valors de um vetor de inteiros
//metodo bolha
void ordenar(int vet[], int tam)
{
    int i, j, aux;
    for(i=0; i<tam; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vet[i] > vet[j])//se necessario trocar
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}
