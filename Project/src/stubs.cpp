#include "stubs.h"
#include <string>
using namespace std;

const string StubServicoAutenticacao::INVALIDO = "12345";
const string StubServicoPessoal::INVALIDO = "12345";
const string StubServicoProdutosFinanceiros::INVALIDO = "12345";

//--------------------------------------------------------------------------------------------
// Implementações dos métodos dos stubs.

bool StubServicoAutenticacao::autenticar(Cpf cpf, Password password){
    if(cpf.getCpf().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoPessoal::cadastrarUsuario(User user){
    if(user.getCpf().getCpf().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoProdutosFinanceiros::cadastrarConta(Count countt){
    if(countt.getNumber().getNumber().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoProdutosFinanceiros::consultarConta(Count *countt){
    if(countt->getNumber().getNumber().compare(INVALIDO) == 0)
        return false;

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Implementar código que atribui valores ao objeto identificado por conta.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    return true;
}

bool StubServicoProdutosFinanceiros::cadastrarProdutoInvestimento(Product product){
    //if(to_string(product.getProductCode().getCode()).compare(INVALIDO) == 0)
    //    return false;
    return true;
}

bool StubServicoProdutosFinanceiros::descadastrarProdutoInvestimento(ProductCode productCode){
    //if(to_string(productCode.getCode()).compare(INVALIDO) == 0)
    //    return false;
    return true;
}

bool StubServicoProdutosFinanceiros::realizarAplicacao(Aplication aplication){
    //if(aplication.getCode().getCode().compare(INVALIDO) == 0)
    //    return false;
    return true;
}

bool StubServicoProdutosFinanceiros::recuperarAplicacao(Aplication *aplication){
    //if(aplication->getCode().getCode().compare(INVALIDO) == 0)
     //   return false;

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Implementar código que atribui valores ao objeto identificado por aplicacao.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    return true;
}


