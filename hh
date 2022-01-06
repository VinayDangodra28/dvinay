&lt;!DOCTYPE html>
&lt;html lang="en">

&lt;head>
    &lt;meta charset="UTF-8">
    &lt;meta http-equiv="X-UA-Compatible" content="IE=edge">
    &lt;meta name="viewport" content="width=device-width, initial-scale=1.0">
    &lt;meta name="keywords" content="compound-interest-calculator">
    &lt;meta name="robot" content="INDEX FOLLOW">
    &lt;meta name="description" content="Compound interest calculator">
    &lt;meta name="author" content="Vinay Dangodra">
    &lt;link rel="shortcut icon" type="image/x-icon" href="{{ url_for('static' , filename='me.jpg') }}">
    &lt;link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
    &lt;title>Compound interest calculator&lt;/title>
&lt;/head>

&lt;body>
    &lt;!-- form -->
    &lt;div class="container">
        &lt;form method="post" id='myform'>
            &lt;div class="mb-3">
                &lt;h1>Find Compound Interest&lt;/h1>
                &lt;label for="exampleInputEmail1" class="form-label">
                    &lt;h2>Initial Investment&lt;/h2>
                &lt;/label>
                &lt;input type="number" class="form-control" id="p" name="p">
            &lt;/div>
            &lt;!---------------------------------------------------------------->
            &lt;label for="exampleInputPassword1" class="form-label">
                &lt;h2>Contribution&lt;/h2>
            &lt;/label>
            &lt;div class="form-check">
                &lt;input class="form-check-input" type="radio" name="abc" value="y" id="yearly_contro" required>
                &lt;label class="form-check-label" for="flexRadioDefault1">
                    Yearly Contribution
                &lt;/label>
            &lt;/div>
            &lt;div class="form-check">
                &lt;input class="form-check-input" type="radio" name="abc" value="m" id="monthly_contro" checked required>
                &lt;label class="form-check-label" for="flexRadioDefault2">
                    Monthly Contribution
                &lt;/label>
            &lt;/div>
            &lt;div class="mb-3">
                &lt;label for="exampleInputPassword1" class="form-label">
                    &lt;h3>Amount&lt;/h3>
                &lt;/label>
                &lt;input type="number" class="form-control" id="m" name="m" required>
            &lt;/div>
            &lt;!---------------------------------------------------------------->
            &lt;div class="mb-3">
                &lt;label for="exampleInputEmail1" class="form-label">
                    &lt;h2>Length of Time in Years&lt;/h2>
                &lt;/label>
                &lt;input type="number" class="form-control" id="t" name="t" required>
            &lt;/div>
            &lt;!---------------------------------------------------------------->
            &lt;div class="mb-3">
                &lt;label for="exampleInputEmail1" class="form-label">
                    &lt;h2>Rate of Interest&lt;/h2>
                &lt;/label>
                &lt;input type="number" class="form-control" id="r" name="r" required>
            &lt;/div>
            &lt;!---------------------------------------------------------------->
            &lt;label for="exampleInputPassword1" class="form-label">
                &lt;h2>Compound Frequency&lt;/h2>
            &lt;/label>
            &lt;div class="form-check">
                &lt;input class="form-check-input" type="radio" name="xyz" value="1" id="n_1" checked>
                &lt;label class="form-check-label" for="flexRadioDefault1">
                    Yearly
                &lt;/label>
            &lt;/div>
            &lt;div class="form-check">
                &lt;input class="form-check-input" type="radio" name="xyz" value="2" id="n_2">
                &lt;label class="form-check-label" for="flexRadioDefault2">
                    Half Yearly
                &lt;/label>
            &lt;/div>
            &lt;div class="form-check">
                &lt;input class="form-check-input" type="radio" name="xyz" value="4" id="n_4">
                &lt;label class="form-check-label" for="flexRadioDefault2">
                    Quarterly
                &lt;/label>
            &lt;/div>
            &lt;div class="form-check">
                &lt;input class="form-check-input" type="radio" name="xyz" value="12" id="n_12">
                &lt;label class="form-check-label" for="flexRadioDefault2">
                    Monthly
                &lt;/label>
            &lt;/div>
            &lt;div class="form-check">
                &lt;input class="form-check-input" type="radio" name="xyz" value="365" id="n_365">
                &lt;label class="form-check-label" for="flexRadioDefault2">
                    Daily
                &lt;/label>
            &lt;/div>
            &lt;!---------------------------------------------------------------->
            &lt;button type="submit" class="btn btn-primary">Calculate&lt;/button>
        &lt;/form>
    &lt;/div>
    &lt;div class="container" id="results">
        &lt;div class="card" style="width: auto;">
            &lt;ul class="list-group list-group-flush">
                {% for list_elem in output %}
                &lt;li class="list-group-item">
                    &lt;h2>{{ list_elem }}&lt;/h2>
                &lt;/li>
                {% endfor %}
            &lt;/ul>
            &lt;img src="{{ url_for('static' , filename='foo.png') }}" alt="grah" >
        &lt;/div>
    &lt;/div>
    &lt;!-- Bootstrap script -->
    &lt;script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p" crossorigin="anonymous">
        &lt;/script>
    &lt;script>
        if ("{{ flash_message }}" == "True") {
            document.getElementById("results").style.display = "block";
            document.getElementById('results').scrollIntoView();
        }
        else{
            document.getElementById("results").style.display = "none";
        }
    &lt;/script>
&lt;/body>

&lt;/html>