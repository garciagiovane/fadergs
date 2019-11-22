package com.garciagiovane;

import com.garciagiovane.service.ArvoreService;

public class Aplicacao {

    public static void main(String[] args) {

        ArvoreService arvoreService = new ArvoreService();

//        arvoreService.adicionaNaArvore(23);
//        arvoreService.adicionaNaArvore(24);
//        arvoreService.adicionaNaArvore(2);
//        arvoreService.adicionaNaArvore(11);

        arvoreService.preencherArvore();
        arvoreService.imprimeArvore(arvoreService.arvore);

    }

}
