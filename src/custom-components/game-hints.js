class GameHints extends HTMLElement {
    connectedCallback() {
        window.gameHints = this;
    }

    initialize() {
        let rules = window.game.getRules();
        for (let i = 0; i < rules.size(); i++) {
            console.log(rules.get(i));
        }
    }
}

customElements.define("game-hints", GameHints);