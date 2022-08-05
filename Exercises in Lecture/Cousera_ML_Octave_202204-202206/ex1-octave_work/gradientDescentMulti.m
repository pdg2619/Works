function [theta, J_history] = gradientDescentMulti(X, y, theta, alpha, num_iters)
%GRADIENTDESCENTMULTI Performs gradient descent to learn theta
%   theta = GRADIENTDESCENTMULTI(x, y, theta, alpha, num_iters) updates theta by
%   taking num_iters gradient steps with learning rate alpha

% Initialize some useful values
m = length(y); % number of training examples
J_history = zeros(num_iters, 1);

new_theta = zeros(size(X,2),1);
old_theta = new_theta;

for iter = 1:num_iters

    % ====================== YOUR CODE HERE ======================
    % Instructions: Perform a single gradient step on the parameter vector
    %               theta.
    %
    % Hint: While debugging, it can be useful to print out the values
    %       of the cost function (computeCostMulti) and gradient here.
    %
  for i = 1:size(X,2)
    new_theta(i,1) = old_theta(i,1) - alpha*(1/m)*((X*old_theta-y)')*X(:,i);
  end

  old_theta = new_theta;

    % ============================================================

    % Save the cost J in every iteration
    J_history(iter) = computeCostMulti(X, y, old_theta);

end

theta = old_theta;

end