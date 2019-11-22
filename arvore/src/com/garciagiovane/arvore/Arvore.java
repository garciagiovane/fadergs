package com.garciagiovane.arvore;

public class Arvore {

    public Integer codigo;
    public String pergunta;
    public Arvore arvoreEsquerda;
    public Arvore arvoreDireita;

    public Arvore(Integer codigo, String pergunta) {
        this.pergunta = pergunta;
        this.codigo = codigo;
    }

    @Override
    public String toString() {
        return "Arvore{" +
                "codigo=" + codigo +
                ", pergunta='" + pergunta + '\'' +
                ", arvoreEsquerda=" + arvoreEsquerda +
                ", arvoreDireita=" + arvoreDireita +
                '}';
    }

}
