class GameBoard extends HTMLElement {
    connectedCallback() {
        window.gameBoard = this;
    }
    

    disconnectedCallback() {
        this.board = null;
    }

    initialize() {
        this.board = window.game.getBoard();
        this.board.print();
        console.log("---------------");
    }
}

customElements.define("game-board", GameBoard);