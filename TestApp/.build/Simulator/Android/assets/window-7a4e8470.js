if (typeof window == 'undefined') (function (g){

    'use strict';

    g.Window = (function () {
        function Window() {
            this.self = this;
            this.window = this;
        }
        return Window;
    })();
    g.window = new g.Window();
    g.self = window;

})(this);