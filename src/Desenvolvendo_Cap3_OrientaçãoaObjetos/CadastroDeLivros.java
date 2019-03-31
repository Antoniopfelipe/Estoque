package Desenvolvendo_Cap3_OrientaçãoaObjetos;

public class CadastroDeLivros {
    public static void main (String [] args) {
    	Livro livro = new Livro();
    	livro.nome = "Java.8";
    	livro.descricao =" Desbrave e aprenda";
    	livro.valor =59.99;
    	livro.isbn ="798-54-654-13845-77-1";
    	System.out.println(livro.nome);
    	System.out.println(livro.descricao);
    	System.out.println(livro.valor);
    	System.out.println(livro.isbn);
    	}
    	}