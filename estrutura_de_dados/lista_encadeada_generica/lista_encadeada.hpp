/********************************************************************
 * Arquivo  : lista_encadeada.hpp
 * Data     : 20220324
 *  
 * Header file para implementar uma lista encadeada generica.
 * 
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++
 * *****************************************************************/
#ifndef LISTA_HPP
#define LISTA_HPP

// ------------------------ CLASSE NODE ---------------------------//
template<typename TIPO>
class Node{
    public:
        Node(const TIPO&);
        TIPO dados() const;
        Node<TIPO>* proximo() const;
        void set_proximo(Node<TIPO>*);

    private:
        TIPO data;
        Node<TIPO> *proximo_node;
};

template<typename TIPO>
Node<TIPO>::Node(const TIPO& n): data(n), proximo_node(nullptr){
    // vazio
}

template<typename TIPO>
TIPO Node<TIPO>::dados() const{
    return data;
}

template<typename TIPO>
Node<TIPO>* Node<TIPO>::proximo() const{
    return proximo_node;
}

template<typename TIPO>
void Node<TIPO>::set_proximo(Node<TIPO> *node){
    proximo_node = node;
}
// --------------------- CLASSE NODE - FIM ------------------------//


// ----------------------- CLASSE LISTA ---------------------------//
template<typename TIPO>
class Lista{
    public:
        Lista();
        ~Lista();
        void push_inicio(const Node<TIPO>&);
        void push_fim(const Node<TIPO>&);
        bool pop_inicio(Node<TIPO>&);
        bool pop_fim(Node<TIPO>&);
        bool is_void() const;
        Node<TIPO>* primeiro() const;
        void clear();

        void print()const;

    private:
        Node<TIPO> *primeiro_node;
        Node<TIPO> *ultimo_node;

        Node<TIPO>* criar_node(const Node<TIPO> &);
};


template<typename TIPO>
Lista<TIPO>::Lista(): primeiro_node(nullptr),ultimo_node(nullptr){
    // vazio
}

template<typename TIPO>
Lista<TIPO>::~Lista(){
    if(!is_void()){
        cout << "Destruindo a lista ...\n";
        Node<TIPO> *node_atual = primeiro_node;
        Node<TIPO> *auxiliar;

        while(node_atual){
            auxiliar = node_atual;
            node_atual = auxiliar->proximo();
            delete auxiliar;
        }
    }
    cout << "Lista destruida!\n";
}

template<typename TIPO>
void Lista<TIPO>::push_inicio(const Node<TIPO> &objeto){
    Node<TIPO> *novo_node = criar_node(objeto);
    if(is_void()){
        primeiro_node = ultimo_node = novo_node;
    }
    else{
        novo_node->set_proximo(primeiro_node);  // ajusta o proximo de novo_node para
                                                // o primeiro node
        primeiro_node = novo_node; // novo_node passa a ser o primeiro_node
    }
}


template<typename TIPO>
void Lista<TIPO>::push_fim(const Node<TIPO> &objeto){
    Node<TIPO> *novo_node = criar_node(objeto);
    if(is_void()){
        primeiro_node = ultimo_node = novo_node;
    }
    else{
        ultimo_node->set_proximo(novo_node); // ajusta o proximo de ultimo_node para
                                             // o novo_node
        ultimo_node = novo_node; // novo_node passa a ser o ultimo_node
    }  
}


template <typename TIPO>
bool Lista<TIPO>::pop_inicio(Node<TIPO> &objeto){
    if(is_void()){
        return false;
    }
    else{
        Node<TIPO> *auxiliar = primeiro_node;
        // se so existir um node na lista
        if(primeiro_node == ultimo_node){
            primeiro_node = ultimo_node = nullptr; 
        }
        else{
            primeiro_node = primeiro_node->proximo();
        }
        objeto = auxiliar->dados();
        delete auxiliar;
        return true;   
    }
}


template <typename TIPO>
bool Lista<TIPO>::pop_fim(Node<TIPO> &objeto){
    if(is_void()){
        return false;
    }
    else{
        Node<TIPO> *auxiliar = ultimo_node;
        if(primeiro_node == ultimo_node){
            primeiro_node = ultimo_node = nullptr; 
        }
        else{
            Node<TIPO> *node_atual = primeiro_node;
            
            // percorre a lista do segundo ao penultimo node
            while(node_atual->proximo() != ultimo_node){
                node_atual = node_atual->proximo();
            }

            // remove o ultimo node
            ultimo_node = node_atual;
            node_atual->set_proximo(nullptr);
        }
        objeto = auxiliar->dados();
        delete auxiliar;
        return true;
    }
}


template <typename TIPO>
bool Lista<TIPO>::is_void() const{
    return primeiro_node == nullptr;
}

template <typename TIPO>
Node<TIPO>* Lista<TIPO>::criar_node(const Node<TIPO> &objeto){
    return new Node<TIPO>(objeto);
}

template <typename TIPO>
Node<TIPO>* Lista<TIPO>::primeiro() const{
    return primeiro_node;
}

template <typename TIPO>
void Lista<TIPO>::clear(){
    Node<TIPO> *auxiliar = primeiro_node;
    while(primeiro_node != ultimo_node){
        primeiro_node = primeiro_node->proximo();
        delete auxiliar;
        auxiliar = primeiro_node;
    }
    primeiro_node = ultimo_node = nullptr;
    cout << "Lista resetada!\n";
}


template <typename TIPO>
void Lista<TIPO>::print() const{
    if(is_void()){
        cout << "Lista vazia!\n";
        return;
    }    
    Node<TIPO>* node_atual = primeiro();

    cout << "INICIO: ";
    while(node_atual){
        cout << node_atual->dados();
        if(node_atual->proximo()){
            cout << ",";
        }
        node_atual = node_atual->proximo();
    }
    cout << " : FIM\n";  
}

// --------------------- CLASSE LISTA - FIM ------------------------//

#endif 
/********************************************************************
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++
 * *****************************************************************/
