export class Game {
    initialize(module) {
        this.module = module;

        this.board = new this.module.GameBoard();
        this.board.print();
        console.log("---------------");

        let rules = this.module.RuleFactory.getRules(this.board, 3);
        for (let i = 0; i < rules.size(); i++) {
            console.log(rules.get(i));
        }
    }
}