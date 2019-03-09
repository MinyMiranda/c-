#include<iostream>
using namespace std;
main(){
	int N,  passou=0, media=0;
	float soma=0;
	cout<<" Digite a quantidade de alunos";
	cin>> N;
	float alunos [N];
	for(int nota=0; nota <N; nota++)
	{
		cout<<"\n Digite a nota do aluno";
		cin>> alunos[nota];
		soma+=alunos[nota];
		media = soma/ N;
	}
	
	for(int i=0; i< N; i++){
		if(alunos[i]>media)
			passou++;
	}
	cout<<" \n A media dos alunos e: " << soma/ N;
	if (passou>0)
		cout<<" \n \n A quantidade de alunos com nota acima da media e : " << passou<<"\n";
	else
		cout<<" \n n\ Não ha nenhum aluno com nota acima da media \n\n";
}

