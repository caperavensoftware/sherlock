class GameBoard extends HTMLElement {
    connectedCallback() {
        window.gameBoard = this;
    }
    

    disconnectedCallback() {
        this.board = null;
    }

    initialize() {
        this.board = window.game.getBoard();
        console.log(this.board);

        for (let row = 0; row < 6; row++) {
            for (let column = 0; column < 6; column++) {

            }
        }
    }
}

customElements.define("game-board", GameBoard);