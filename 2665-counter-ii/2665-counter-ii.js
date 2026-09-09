/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let currCount = init;
    return {
        increment : () => {
            return ++currCount;
        },
        decrement : () => {
            return --currCount;
        },
        reset : () => {
            currCount = init;
            return currCount;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */