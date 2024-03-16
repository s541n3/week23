document.getElementsByClassName('click')[0].addEventListener('click', function(e){
    e.target.innerHTML = 'clicked'; //change button text 'click1' to 'clicked'
    e.target.style.backgroundColor = 'red';
});