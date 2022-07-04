#include "Empresa.h"


int main() {
    Empresa A("Hortaliças Bom Jesus", "ltda", "029383838383");
    Funcionario F1("Felipe Braz da Silva", "14825308612", "20210101", 3000, 40, 40);
    Funcionario F2("Adriano gomes da Silva", "14425308698", "20210101", 3500, 40, 40);
    Cliente C1("Fernanda Braz da Silva", "10263894489", "Alagoa Nova, sítio Bacuparí", "839816612xx" );
    Cliente C2("Miguel Felix Rodrigues da Silva", "10763894489", "Alagoa Nova, sítio Bacuparí", "839816612xx" );
    Cliente C3("Iraci gomes da Silva", "10263894489", "Alagoa Nova, sítio Bacuparí", "839816612xx" );
    
    A.setFuncionario(F1);
    A.setFuncionario(F2);
    
    A.imprimirFuncionarios();

    A.setClientes(C1);
    A.setClientes(C2);
    A.setClientes(C3);

    A.imprimirClientes();

    cout << "Valor da folha de pagamento: " << A.CalculaFolhaPagamento();

    return 0;
}






    
//     char opcao = ' ';
//     cout << "Seja Bem vindo!" << endl;
//     cout << "0- Sair do programa " << endl;
//     cout << "1- Cadastrar empresa" << endl;
//     cout << endl;
//     cout << "digite a opção desejada: ";
//     cin >> opcao;
//     cout << endl;

//     while (opcao == '1') {
//         /*variáveis*/
//         string nomeEmpresa = " ";
//         string razaoSocial = " ";
//         string cnpj = " ";
//         char escolha = ' ';
//         /*recebendo dados do usuário*/
//         cout << "Digite o nome da empresa: ";
//         cin.ignore();
//         getline(cin,nomeEmpresa);
//         cout << "Digite a razão social: ";
//         getline(cin,razaoSocial);
//         cout << "Digite o CNPJ: ";
//         cin >> cnpj;

//         cout << "Deseja continuar?" << endl;
//         cout << "1-Sim  2-Não" << endl;
//         cout << "digite: ";
//         cin >> escolha;

//         if (escolha == '1'){
//             cout << endl;
//             cout << "Criando cadastro ...";
//             Empresa A(nomeEmpresa, razaoSocial, cnpj);}

//         else {
//             cerr << "Saindo do programa..." << endl;
//         }

//         bool sair = false; 
        
//         while (!sair){

//             cout << "-------------------------------------" << endl;
//             cout << "Funcionalidades" << endl;
//             cout << endl;
//             cout << "0- Sair do programa " << endl;
//             cout << "1- Adicionar novo Funcionario" << endl;
//             cout << "2- Adicionar novo Cliente" << endl;
//             cout << "3- Visualizar lista de clientes" << endl;
//             cout << "4- Visualizar lista de Funcionários" << endl;
//             cout << "5- Visualizar folha de pagamento" << endl;
            
//             cout << "-------------------------------------" << endl;
//             cout << endl;

//             char numero;
//             cout << "Digite a opção desejada: ";
//             cin >> numero;
            
//             if (numero == '0'){
//                 cout << "Saindo do programa...";
//                 exit(1);
//             }
//             else if (numero == '1'){
//                 string nome, cpf, matricula;
//                 double salario;
//                 int qtdeHorasTrabalhadas, CHMensal;
//                 cout << "Digite o nome do funcionário: ";
//                 cin.ignore();
//                 getline(cin,nome);
//                 cout << "Digite o cpf: ";
//                 cin >> cpf;
//                 cout << "Digite o número da matrícula: ";
//                 cin >> matricula;
//                 cout << "Digite o salário base: ";
//                 cin >> salario;
//                 cout << "Digite a Carga horária mensal: ";
//                 cin >> CHMensal;
//                 cout << "Digite a Carga horária trabalhada: ";
//                 cin >> CHMensal;
//                 Funcionario nome1;

//                 Funcionario nome1(nome, cpf, matricula, salario, CHMensal, qtdeHorasTrabalhadas);



            
//         }
        
        
//     }
//         }
        
// }
    


    
    // Empresa A("Hortaliças Bom Jesus", "ltda", "029383838383");
    // Funcionario F1("Felipe Braz da Silva", "14825308612", "20210101", 3000, 40, 40);
    // Funcionario F2("Adriano gomes da Silva", "14425308698", "20210101", 3500, 40, 40);
    // Cliente C1("Fernanda Braz da Silva", "10263894489", "Alagoa Nova, sítio Bacuparí", "839816612xx" );
    // Cliente C2("Miguel Felix Rodrigues da Silva", "10763894489", "Alagoa Nova, sítio Bacuparí", "839816612xx" );
    // Cliente C3("Iraci gomes da Silva", "10263894489", "Alagoa Nova, sítio Bacuparí", "839816612xx" );

    // A.setFuncionario(F1);
    // A.setFuncionario(F2);
    
    // A.imprimirFuncionarios();

    // A.setClientes(C1);
    // A.setClientes(C2);
    // A.setClientes(C3);

    // A.imprimirClientes();
    
