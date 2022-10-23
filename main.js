let searchbutton = document.getElementById('searchbutton');

searchbutton.addEventListener('click', function onClick() {
    let input = document.getElementById('searchbox').value
    let x = document.getElementsByClassName('infosection');
    let input1 = "How to do a hackathon poorly but proudly";
    let input2 = "Programming Languages and Computer Networks, 2nd Edition";
    let input3 = "Vietnamese Vocabulary";
    let inputArray = [input1, input2, input3];

    let output1 = document.getElementById('infosection1');
    let output2 = document.getElementById('infosection2');
    let output3 = document.getElementById('infosection3');
    let output = [output1, output2, output3];
    for (i=0; i<3; i++) {
        if (input == inputArray[i]) {
            output[i].style.display="block";
        } else {
            output[i].style.display="none";
        }
    }
})
