function diagnoses = diagnose(imaging)
    params = read_params('./parameters.txt');
    % addpath('algorithms');

    ct_diagnosis = ct(imaging);
    mri_diagnosis = mri(imaging);
    us_diagnosis = us(imaging);
    xrays_diagnosis = xrays(imaging);

    diagnoses = struct('ct', ct_diagnosis, 'mri', mri_diagnosis, 'us', us_diagnosis, 'xrays', xrays_diagnosis, 'params', params);
end

