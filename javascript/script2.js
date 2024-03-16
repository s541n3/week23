document.getElementById('btn').addEventListener('click', function(e){
    var randomColor = '#' + Math.floor(
        Math.random()*16777215).toString(16);
            document.body.style.background =
            randomColor;

});