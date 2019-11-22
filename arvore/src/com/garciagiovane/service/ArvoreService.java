package com.garciagiovane.service;

import com.garciagiovane.arvore.Arvore;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class ArvoreService {

    public Arvore arvore;

    public void adicionaNaArvore(int codigo, String pergunta) {
        arvore = incluirNaArvoreRecursivo(arvore, codigo, pergunta);
    }

    public Arvore incluirNaArvoreRecursivo(Arvore arvore, Integer codigo, String pergunta) {
        if (arvore == null) {
            return new Arvore(codigo, pergunta);
        } else if (codigo < arvore.codigo) {
            arvore.arvoreEsquerda = incluirNaArvoreRecursivo(arvore.arvoreEsquerda, codigo, pergunta);
        } else if (codigo > arvore.codigo) {
            arvore.arvoreDireita = incluirNaArvoreRecursivo(arvore.arvoreDireita, codigo, pergunta);
        }
        return arvore;
    }

    public void imprimeArvore(Arvore arvore) {
        if (arvore != null) {
            System.out.println(arvore);
            imprimeArvore(arvore.arvoreDireita);
            imprimeArvore(arvore.arvoreEsquerda);
        } else
            System.out.println("Arvore vazia");
    }

    public void preencherArvore() {
        try (BufferedReader bufferedReader = new BufferedReader(new FileReader("perguntas.txt"))) {
            String pergunta = "";

            while ((pergunta = bufferedReader.readLine()) != null) {
                String[] perguntaSeparada = pergunta.split("-");
                adicionaNaArvore(Integer.parseInt(perguntaSeparada[0]), perguntaSeparada[1]);
            }
        } catch (IOException e) {
            System.out.println(e.getLocalizedMessage());
        }
    }
}
