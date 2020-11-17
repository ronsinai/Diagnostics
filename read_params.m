function out = read_params(params_path)
    %read in file
    str = fileread(params_path);
    
    %extract fields and values
    pieces = regexp(str, '(?<field>\w+)=(?<value>[^\n]+)', 'names');
    out = struct();  %your variables
  
    for k=1:length(pieces),
        field = pieces(k).field;
        val = pieces(k).value;
        tf= ismember(val, char([34 39]));    %remove " and ' from string
        val = strtrim(val(~tf));    %also remove spaces
        
        %try to convert to double.  If successful, use converted value,
        %otherwise use original (string) value
        valn = str2double(val);
        if ~isnan(valn), %conversion successful, use as numeric
            val = valn;
        end
        %add to output structure
        out.(field) = val;
    end
end