class Queue{
    constructor(){
        this.items=[];
    }
    enqueue(element){
        this.items.push(element);
    }
    dequeue(){
        if(this.isEmpty()){
            return null;
        }
        const removedElement=this.items.shift();
        return removedElement;
    }
    getFront(){
        if(this.isEmpty()){
            return null;
        }
        return this.items[0];
    }
    getRear(){
        if(this.isEmpty()){
            return null;
        }
        return this.items[this.items.length-1];
    }
    isEmpty(){
        return this.items.length===0;
    }
    getSize(){
        return this.items.length;
    }
}
