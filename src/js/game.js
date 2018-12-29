export class Game {
    initialize(module) {
        this.module = module;
    }

    getBoard() {
        return new this.module.GameBoard();
    }

    getRules() {
        return this.module.RuleFactory.getRules(window.gameBoard.board, 3);
    }
}