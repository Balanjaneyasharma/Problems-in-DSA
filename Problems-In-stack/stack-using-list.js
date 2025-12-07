
//implementation of a Stack data structure using linked list

class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class Stack {
    constructor() {
        this.top = null;
        this.size = 0;
    }

    push(value) {
        const newNode = new Node(value);
        newNode.next = this.top;
        this.top = newNode;
        this.size++;
    }

    top() {
        return this.top?.value
    }

    pop() {
        const topNode = this.top;
        this.top = this.top?.next || null;
        if(topNode) this.size--;
        return topNode?.value;
    }


    isEmpty() {
        return this.size === 0;
    }

    getSize() {
        return this.size;
    }
}
